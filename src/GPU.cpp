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
