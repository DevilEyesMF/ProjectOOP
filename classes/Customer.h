#pragma once

#include <string>
#include <fstream>

class Customer
{
public:
	/* constructors */
	Customer(std::string name, std::string address);

	/* getters */
	std::string getName();
	std::string getAddress();
	bool getCompany();

	/* setters */
	void setName(std::string);
	void setAddress(std::string);

	/* methods */
	virtual void serialize(std::ofstream&) const;

protected:
	bool company;

private:
	std::string name;
	std::string address;
};

