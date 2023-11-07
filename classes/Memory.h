#pragma once

#include "Component.h"

class Memory : public Component
{
public:
	// getters
	int getSize();
	int getSpeed();

	// setters
	void setSize(int);
	void setSpeed(int);

private:
	int size;
	int speed;
};

