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

/* methods */
void HardDrive::serialize(std::ofstream& filestream) const
{
    size_t size; // used to store the length of strings or other attributes with a variable length

    /* write type */
    Component::Type type = this->getType(); // stores the type of Component
    filestream.write(reinterpret_cast<const char*>(&type), sizeof(Component::Type));

    /* send general Component data */
    Component::serialize(filestream);

    /* write speed */
    filestream.write(reinterpret_cast<const char*>(&this->speed), sizeof(this->speed));

    /* write size */
    filestream.write(reinterpret_cast<const char*>(&this->size), sizeof(this->size));

    /* write size */
    size = this->slot.size(); // get the length of the string
    filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
    filestream.write(reinterpret_cast<const char*>(this->slot.c_str()), size); // write the string itself
}