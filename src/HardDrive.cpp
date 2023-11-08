#include "../include/HardDrive.h"

/* constructor */
HardDrive::HardDrive(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int speed,
                     int size, std::string& slot)
        : Component(manufacturer, name, price, stock, laptop), speed(speed), size(size), slot(slot)
{
    this->type = Component::Type::HARDDRIVE;
}

/* getters */
int HardDrive::getSpeed() const
{
    return this->speed;
}

int HardDrive::getSize() const
{
    return this->size;
}

const std::string& HardDrive::getSlot() const
{
    return this->slot;
}

/* setters */
void HardDrive::setSpeed(int speed)
{
    this->speed = speed;
}

void HardDrive::setSize(int size)
{
    this->size = size;
}

void HardDrive::setSlot(std::string& slot)
{
    this->slot = slot;
}
