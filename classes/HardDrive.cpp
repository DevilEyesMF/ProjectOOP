#include "HardDrive.h"

// getters
int HardDrive::getSpeed()
{
	return this->speed;
}
int HardDrive::getSize()
{
	return this->size;
}
std::string HardDrive::getSlot()
{
	return this->slot;
}

// setters
void HardDrive::setSpeed(int speed)
{
	this->speed = speed;
}
void HardDrive::setSize(int size)
{
	this->size = size;
}
void HardDrive::setSlot(std::string slot)
{
	this->slot = slot;
}
