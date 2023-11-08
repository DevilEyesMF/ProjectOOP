#include "../include/Memory.h"

/* constructor */
Memory::Memory(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int size, int speed)
        : Component(manufacturer, name, price, stock, laptop), size(size), speed(speed)
{
    this->type = Component::Type::MEMORY;
}

/* getters */
int Memory::getSize() const
{
    return this->size;
}

int Memory::getSpeed() const
{
    return this->speed;
}

/* setters */
void Memory::setSize(int size)
{
    this->size = size;
}

void Memory::setSpeed(int speed)
{
    this->speed = speed;
}

/* methods */
void Memory::serialize(std::ofstream& filestream) const
{
    /* write type */
    Component::Type type = this->getType(); // stores the type of Component
    filestream.write(reinterpret_cast<const char*>(&type), sizeof(Component::Type));

    /* send general Component data */
    Component::serialize(filestream);

    /* write size */
    filestream.write(reinterpret_cast<const char*>(&this->size), sizeof(this->size));

    /* write speed */
    filestream.write(reinterpret_cast<const char*>(&this->speed), sizeof(this->speed));
}