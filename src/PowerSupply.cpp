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

void PowerSupply::serialize(std::ofstream& filestream) const
{
    size_t size; // used to store the length of strings or other attributes with a variable length

    /* write type */
    Component::Type type = this->getType(); // stores the type of Component
    filestream.write(reinterpret_cast<const char*>(&type), sizeof(Component::Type));

    /* send general Component data */
    Component::serialize(filestream);

    /* write power */
    filestream.write(reinterpret_cast<const char*>(&this->power), sizeof(this->power));

    /* write certification */
    size = this->certification.size(); // get the length of the string
    filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
    filestream.write(reinterpret_cast<const char*>(this->certification.c_str()), size); // write the string itself

}