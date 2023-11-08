#include "../include/PowerSupply.h"

/* constructor */
PowerSupply::PowerSupply(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int power,
                         std::string& certification)
        : Component(manufacturer, name, price, stock, laptop), power(power), certification(certification)
{
    this->type = Component::Type::POWERSUPPLY;
}

/* getters */
int PowerSupply::getPower() const
{
    return this->power;
}

const std::string& PowerSupply::getCertification() const
{
    return this->certification;
}

/* setters */
void PowerSupply::setPower(int power)
{
    this->power = power;
}

void PowerSupply::setCertification(std::string& certification)
{
    this->certification = certification;
}
