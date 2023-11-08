#include "../include/Motherboard.h"

/* constructor */
Motherboard::Motherboard(std::string& manufacturer, std::string& name, float price, int stock, bool laptop,
                         std::string& socket, int memorySlots, std::string& size)
        : Component(manufacturer, name, price, stock, laptop), socket(socket), memorySlots(memorySlots),
          size(size)
{
    this->type = Component::Type::MOTHERBOARD;
}

/* getters */
const std::string& Motherboard::getSocket() const
{
    return this->socket;
}

int Motherboard::getMemorySlots() const
{
    return this->memorySlots;
}

const std::string& Motherboard::getSize() const
{
    return this->size;
}

/* setters */
void Motherboard::setSocket(std::string& socket)
{
    this->socket = socket;
}

void Motherboard::setMemorySlots(int memorySlots)
{
    this->memorySlots = memorySlots;
}

void Motherboard::setSize(std::string& size)
{
    this->size = size;
}

/* methods */
void Motherboard::serialize(std::ofstream& filestream) const
{
    size_t size; // used to store the length of strings or other attributes with a variable length

    /* write type */
    Component::Type type = this->getType(); // stores the type of Component
    filestream.write(reinterpret_cast<const char*>(&type), sizeof(Component::Type));

    /* send general Component data */
    Component::serialize(filestream);

    /* write socket */
    size = this->socket.size(); // get the length of the string
    filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
    filestream.write(reinterpret_cast<const char*>(this->socket.c_str()), size); // write the string itself

    /* write memorySlots */
    filestream.write(reinterpret_cast<const char*>(&this->memorySlots), sizeof(this->memorySlots));

    /* write size */
    size = this->size.size(); // get the length of the string
    filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
    filestream.write(reinterpret_cast<const char*>(this->size.c_str()), size); // write the string itself
}