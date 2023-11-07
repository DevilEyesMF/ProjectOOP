#include "Component.h"

/* constructor */
Component::Component(std::string manufacturer, std::string name, float price, int stock, bool laptop)
	: manufacturer(manufacturer), name(name), type(ABSTRACT), price(price), stock(stock), laptop(laptop) {}

/* getters */
std::string Component::getManufacturer()
{
	return this->manufacturer;
}
std::string Component::getName()
{
	return this->name;
}
float Component::getPrice()
{
	return this->price;
}
int Component::getStock()
{
	return this->stock;
}
Component::Type Component::getType() const
{
	return this->type;
}
int Component::getLaptop()
{
	return this->laptop;
}

// setters
void Component::setManufacturer(std::string manufacturer)
{
	this->manufacturer = manufacturer;
}
void Component::setName(std::string name)
{
	this->name = name;
}
void Component::setPrice(float price)
{
	this->price = price;
}
void Component::setStock(int stock)
{
	this->stock = stock;
}
void Component::setType(Type type)
{
	this->type = type;
}
void Component::setLaptop(bool laptop)
{
	this->laptop = laptop;
}

// methods
void Component::serialize(std::ofstream& filestream) const
{
	size_t size; // used to store the length of strings or other attributes with a variable length

	/* send type with derived classes */

	/* write manufacturer */
	size = this->manufacturer.size(); // get the length of the string
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
	filestream.write(reinterpret_cast<const char*>(this->manufacturer.c_str()), size); // write the string itself

	/* write name */
	size = this->name.size(); // get the length of the string
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
	filestream.write(reinterpret_cast<const char*>(this->name.c_str()), size); // write the string itself

	/* write price */
	filestream.write(reinterpret_cast<const char*>(&this->price), sizeof(this->price));

	/* write stock */
	filestream.write(reinterpret_cast<const char*>(&this->stock), sizeof(this->stock));

	/* write laptop */
	filestream.write(reinterpret_cast<const char*>(&this->laptop), sizeof(this->laptop));

	/* send type specific data with derived class */
}
