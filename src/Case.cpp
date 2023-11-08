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

/* methods */
void Case::serialize(std::ofstream& filestream) const
{
    size_t size; // used to store the length of strings or other attributes with a variable length

    /* write type */
    Component::Type type = this->getType(); // stores the type of Component
    filestream.write(reinterpret_cast<const char*>(&type), sizeof(Component::Type));

    /* send general Component data */
    Component::serialize(filestream);

    /* write color */
    size = this->color.size(); // get the length of the string
    filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
    filestream.write(reinterpret_cast<const char*>(this->color.c_str()), size); // write the string itself

    /* write motherboardSize */
    size = this->motherboardSize.size(); // get the length of the string
    filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
    filestream.write(reinterpret_cast<const char*>(this->motherboardSize.c_str()), size); // write the string itself

    /* write material */
    size = this->material.size(); // get the length of the string
    filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
    filestream.write(reinterpret_cast<const char*>(this->material.c_str()), size); // write the string itself
}