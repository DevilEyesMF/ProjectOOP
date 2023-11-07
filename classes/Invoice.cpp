#include "Invoice.h"

// getters
int Invoice::getInvoiceID()
{
	return this->invoiceID;
}
Customer Invoice::getCustomer()
{
	return this->customer;
}
Component* Invoice::getComponents()
{
	return this->components;
}
float Invoice::getTotalPrice()
{
	return this->totalPrice;
}

// setters
void Invoice::setInvoiceID(int id)
{
	this->invoiceID = id;
}
void Invoice::setCustomer(Customer customer)
{
	this->customer = customer;
}
void Invoice::setComponents(Component* components)
{
	this->components = components;
}
void Invoice::setTotalPrice(float totalPrice)
{
	this->totalPrice = totalPrice;
}

// methods
float Invoice::calculateTotalPrice(Component* components, Customer customer)
{
	return -1;
}
