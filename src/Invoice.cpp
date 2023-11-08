#include "../include/Invoice.h"

/* getters */
int Invoice::getInvoiceID() const
{
    return this->invoiceID;
}

const Customer& Invoice::getCustomer() const
{
    return this->customer;
}

const std::vector<Component*>& Invoice::getComponents() const
{
    return this->components;
}

float Invoice::getTotalPrice() const
{
    return this->totalPrice;
}

/* setters */
void Invoice::setInvoiceID(int id)
{
    this->invoiceID = id;
}

void Invoice::setCustomer(Customer& customer)
{
    this->customer = customer;
}

void Invoice::setComponents(std::vector<Component*>& components)
{
    this->components = components;
}

void Invoice::setTotalPrice(float totalPrice)
{
    this->totalPrice = totalPrice;
}

/* methods */
float Invoice::calculateTotalPrice(const std::vector<Component*>& components, const Customer& customer)
{
    return -1;
}
