#include "Motherboard.h"

// getters
std::string Motherboard::getSocket()
{
	return this->socket;
}
int Motherboard::getMemorySlots()
{
	return this->memorySlots;
}
std::string Motherboard::getSize()
{
	return this->size;
}

// setters
void Motherboard::setSocket(std::string socket)
{
	this->socket = socket;
}
void Motherboard::setMemorySlots(int memorySlots)
{
	this->memorySlots = memorySlots;
}
void Motherboard::setSize(std::string size)
{
	this->size = size;
}
