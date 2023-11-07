#pragma once

#include "Component.h"

class Case : public Component
{
public:
	// getters
	std::string getColor();
	std::string getMotherboardSize();
	std::string getMaterial();

	// setters
	void setColor(std::string);
	void setMotherboardSize(std::string);
	void setMaterial(std::string);

private:
	std::string color;
	std::string motherboardSize;
	std::string material;
};

