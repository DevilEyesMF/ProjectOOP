#include "Customer.h"

/* constructor */
Customer::Customer(std::string name, std::string address)
	: name(name), address(address), company(false) {}

// getters
std::string Customer::getName()
{
	return this->name;
}
std::string Customer::getAddress()
{
	return this->address;
}
bool Customer::getCompany()
{
	return this->company;
}

// setters
void Customer::setName(std::string name)
{
	this->name = name;
}
void Customer::setAddress(std::string address)
{
	this->address = address;
}

/* methods */
void Customer::serialize(std::ofstream& filestream) const
{
	size_t size; // used to store the length of strings or other attributes with a variable length

	/* write company */
	filestream.write(reinterpret_cast<const char*>(&this->company), sizeof(this->company)); // write whether it's a businness client or not

	/* write name */
	size = this->name.size();
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
	filestream.write(reinterpret_cast<const char*>(this->name.c_str()), size); // write the string itself

	/* write address */
	size = this->address.size();
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
	filestream.write(reinterpret_cast<const char*>(this->address.c_str()), size); // write the string itself
}