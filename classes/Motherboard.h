#pragma once

#include "Component.h"

class Motherboard : public Component
{
public:
	// getters
	std::string getSocket();
	int getMemorySlots();
	std::string getSize();

	// setters
	void setSocket(std::string);
	void setMemorySlots(int);
	void setSize(std::string);

private:
	std::string socket;
	int memorySlots;
	std::string size;
};

