#pragma once

#include "Component.h"

class HardDrive : public Component
{
public:
	// getters
	int getSpeed();
	int getSize();
	std::string getSlot();

	// setters
	void setSpeed(int);
	void setSize(int);
	void setSlot(std::string);

private:
	int speed;
	int size;
	std::string slot;
};