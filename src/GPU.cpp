#include "../include/GPU.h"

/* constructor */
GPU::GPU(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int power, int busspeed)
        : Component(manufacturer, name, price, stock, laptop), power(power), busspeed(busspeed)
{
    this->type = Component::Type::GPU;
}

/* getters */
int GPU::getPower() const
{
    return this->power;
}

int GPU::getBusspeed() const
{
    return this->busspeed;
}

/* setters */
void GPU::setPower(int power)
{
    this->power = power;
}

void GPU::setBusspeed(int busspeed)
{
    this->busspeed = busspeed;
}

void GPU::serialize(std::ofstream& filestream) const
{
    size_t size; // used to store the length of strings or other attributes with a variable length

    /* write type */
    Component::Type type = this->getType(); // stores the type of Component
    filestream.write(reinterpret_cast<const char*>(&type), sizeof(Component::Type));

    /* send general Component data */
    Component::serialize(filestream);

    /* write power */
    filestream.write(reinterpret_cast<const char*>(&this->power), sizeof(this->power));

    /* write busspeed */
    filestream.write(reinterpret_cast<const char*>(&this->busspeed), sizeof(this->busspeed));
}