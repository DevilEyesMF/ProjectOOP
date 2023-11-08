#pragma once

#include <vector>
#include "Customer.h"
#include "Component.h"

class Invoice
{
public:
    /* getters */
    int getInvoiceID() const;
    const Customer& getCustomer() const;
    const std::vector<Component*>& getComponents() const;
    float getTotalPrice() const;

    /* setters */
    void setInvoiceID(int);
    void setCustomer(Customer&);
    void setComponents(std::vector<Component*>&);
    void setTotalPrice(float);

private:
    /* attributes */
    int invoiceID;
    Customer customer;
    std::vector<Component*> components;
    float totalPrice;

    /* methods */
    float calculateTotalPrice(const std::vector<Component*>&, const Customer&);
};