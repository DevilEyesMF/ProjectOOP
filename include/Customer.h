#pragma once

#include <string>
#include <fstream>

class Customer
{
public:
    /* constructors */
    Customer(std::string& name, std::string& address);

    /* getters */
    const std::string& getName() const;

    const std::string& getAddress() const;

    bool getCompany() const;

    /* setters */
    void setName(std::string&);

    void setAddress(std::string&);

    /* methods */
    virtual void serialize(std::ofstream&) const;

protected:
    /* attributes */
    bool company;

private:
    /* attributes */
    std::string name;
    std::string address;
};

