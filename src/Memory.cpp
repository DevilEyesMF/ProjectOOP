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
