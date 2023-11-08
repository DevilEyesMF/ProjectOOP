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
