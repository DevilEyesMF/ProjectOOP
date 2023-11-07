#include "PowerSupply.h"

// getters
int PowerSupply::getPower()
{
	return this->power;
}
std::string PowerSupply::getCertification()
{
	return this->certification;
}

// setters
void PowerSupply::setPower(int power)
{
	this->power = power;
}
void PowerSupply::setCertification(std::string)
{
	this->certification = certification;
}
