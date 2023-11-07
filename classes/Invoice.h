#pragma once

#include "Customer.h"
#include "Component.h"

class Invoice
{
public:
	// getters
	int getInvoiceID();
	Customer getCustomer();
	Component* getComponents();
	float getTotalPrice();

	// setters
	void setInvoiceID(int);
	void setCustomer(Customer);
	void setComponents(Component*);
	void setTotalPrice(float);

private:
	// attributes
	int invoiceID;
	Customer customer;
	Component* components;
	float totalPrice;

	// methods
	float calculateTotalPrice(Component*, Customer);
};

