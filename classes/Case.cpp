#include "Case.h"

// getters
std::string Case::getColor()
{
	return this->color;
}
std::string Case::getMotherboardSize()
{
	return this->motherboardSize;
}
std::string Case::getMaterial()
{
	return this->material;
}

// setters
void Case::setColor(std::string color)
{
	this->color = color;
}
void Case::setMotherboardSize(std::string size)
{
	this->motherboardSize = size;
}
void Case::setMaterial(std::string material)
{
	this->material = material;
}
