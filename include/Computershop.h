#pragma once

#include <string>
#include <vector>
#include <fstream>
#include "Component.h"
#include "Customer.h"

class Computershop
{
public:
    /* constructor */
    Computershop(std::string& name, std::string& address);

    /* destructor */
    ~Computershop();

    /* getters */
    const std::string& getName() const;
    const std::string& getAddress() const;
    std::vector<Component*>& getComponents();
    std::vector<Customer*>& getCustomers();

    /* setters */
    void setName(std::string&);
    void setAddress(std::string&);
    void setComponents(std::vector<Component*>&);
    void setCustomers(std::vector<Customer*>&);

    /* methods */
    void addComponent(Component*);
    void addCustomer(Customer*);
    void saveToFile(const std::string&) const;
    void readFromFile(const std::string&);

private:
    /* attributes */
    std::string name;
    std::string address;
    std::vector<Component*> components;
    std::vector<Customer*> customers;
};

