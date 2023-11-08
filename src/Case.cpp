#include "../include/Case.h"

/* constructor */
Case::Case(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, std::string& color,
           std::string& motherboardSize, std::string& material)
        : Component(manufacturer, name, price, stock, laptop), color(color),
          motherboardSize(motherboardSize), material(material)
{
    this->type = Component::Type::CASE;
}

/* getters */
const std::string& Case::getColor() const
{
    return this->color;
}

const std::string& Case::getMotherboardSize() const
{
    return this->motherboardSize;
}

const std::string& Case::getMaterial() const
{
    return this->material;
}

/* setters */
void Case::setColor(std::string& color)
{
    this->color = color;
}

void Case::setMotherboardSize(std::string& size)
{
    this->motherboardSize = size;
}

void Case::setMaterial(std::string& material)
{
    this->material = material;
}
