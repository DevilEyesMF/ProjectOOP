#pragma once

#include "Component.h"

class GPU : public Component
{
public:
	// constructor

	// getters
	int getPower();
	int getBusspeed();

	// setters
	void setPower(int);
	void setBusspeed(int);

private:
	int power;
	int busspeed;
};

