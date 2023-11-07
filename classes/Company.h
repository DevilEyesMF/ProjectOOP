#pragma once

#include "Customer.h"

class Company : public Customer
{
public:
	/* constructor */
	Company(std::string name, std::string address, int vat, int reduction, int yearlyBuy);

	// getters
	int getVat();
	int getReduction();
	int getYearlyBuy();

	// setters
	void setVat(int);
	void setReduction(int);
	void setYearlyBuy(int);

private:
	int vat;
	int reduction;
	int yearlyBuy;

	// methods
	int calculateReduction();
	void serialize(std::ofstream&) const override;
};

