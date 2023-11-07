#include "Computershop.h"

// constructor
Computershop::Computershop(std::string name, std::string address)
{
	this->name = name;
	this->address = address;
}

/* destructor */
Computershop::~Computershop()
{
	for (Component* c : this->components)
	{
		delete c;
	}

	for (Customer* c : this->customers)
	{
		delete c;
	}
}

// getters
std::string Computershop::getName()
{
	return this->name;
}
std::string Computershop::getAddress()
{
	return this->address;
}
std::vector<Component*>& Computershop::getComponents()
{
	return this->components;
}
std::vector<Customer*>& Computershop::getCustomers()
{
	return this->customers;
}


// setters
void Computershop::setName(std::string name)
{
	this->name = name;
}
void Computershop::setAddress(std::string address)
{
	this->address = address;
}
void Computershop::setComponents(std::vector<Component*> components)
{
	this->components = components;
}
void Computershop::setCustomers(std::vector<Customer*> customers)
{
	this->customers = customers;
}

// methods
void Computershop::addComponent(Component* component)
{
	this->components.push_back(component);
}
void Computershop::addCustomer(Customer* customer)
{
	this->customers.push_back(customer);
}
void Computershop::saveToFile(std::string filename)
{
	size_t size; // used to store the length of strings or other attributes with a variable length

	std::ofstream filestream("temp_data.bin", std::ios::out | std::ios::binary); // create a binary filestream

	/* write name */
	size = this->name.size(); // get the length of the string
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
	filestream.write(reinterpret_cast<const char*>(this->name.c_str()), size); // write the string itself

	/* write address */
	size = this->address.size(); // get the length of the string
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
	filestream.write(reinterpret_cast<const char*>(this->address.c_str()), size); // write the string itself

	/* write components */
	size = components.size(); // get the amount of elements in the vector
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the number of elements
	for (Component* c : this->components)
	{
		c->serialize(filestream); // individually serialize and write every component
	}

	/* write customers */
	size = customers.size(); // get the amount of elements in the vector
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the number of elements
	for (Customer* c : this->customers)
	{
		c->serialize(filestream); // individually serialize and write every customer
	}

	/* close filestream */
	filestream.close();

	/* rename the file */
	// TODO code opkuisen + no hardcode (const str)
	if (std::fstream(filename))
	{
		std::remove(filename.c_str());
	}
	rename("temp_data.bin", filename.c_str());
}
void Computershop::readFromFile(std::string filename)
{

}