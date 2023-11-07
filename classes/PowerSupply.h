#pragma once

#include "Component.h"

class PowerSupply : public Component
{
public:
	// getters
	int getPower();
	std::string getCertification();

	// setters
	void setPower(int);
	void setCertification(std::string);

private:
	int power;
	std::string certification;
};

