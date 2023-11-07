#include "CPU.h"

// constructor
CPU::CPU(std::string manufacturer, std::string name, float price, int stock, bool laptop, int speed, int cores, std::string socket)
	: Component(manufacturer, name, price, stock, laptop), speed(speed), cores(cores), socket(socket)
{
	this->type = Component::Type::CPU;
}

// getters
int CPU::getSpeed()
{
	return this->speed;
}
int CPU::getCores()
{
	return this->cores;
}
std::string CPU::getSocket()
{
	return this->socket;
}

// setters
void CPU::setSpeed(int speed)
{
	this->speed = speed;
}
void CPU::setCores(int cores)
{
	this->cores = cores;
}
void CPU::setSocket(std::string socket)
{
	this->socket = socket;
}

/* methods */
void CPU::serialize(std::ofstream& filestream) const
{
	size_t size; // used to store the length of strings or other attributes with a variable length

	/* write type */
	Component::Type type = this->getType(); // stores the type of Component
	filestream.write(reinterpret_cast<const char*>(&type), sizeof(Component::Type));

	/* send general Component data */
	Component::serialize(filestream);

	/* write speed */
	filestream.write(reinterpret_cast<const char*>(&this->speed), sizeof(this->speed));

	/* write cores */
	filestream.write(reinterpret_cast<const char*>(&this->cores), sizeof(this->cores));

	/* write socket */
	size = this->socket.size(); // get the length of the string
	filestream.write(reinterpret_cast<const char*>(&size), sizeof(size)); // write the length of the string
	filestream.write(reinterpret_cast<const char*>(this->socket.c_str()), size); // write the string itself
}