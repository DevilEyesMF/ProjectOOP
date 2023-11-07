#include "GPU.h"

// constructor

// getters
int GPU::getPower()
{
	return this->power;
}
int GPU::getBusspeed()
{
	return this->busspeed;
}

// setters
void GPU::setPower(int power)
{
	this->power = power;
}
void GPU::setBusspeed(int busspeed)
{
	this->busspeed = busspeed;
}
