#pragma once

#include "Customer.h"

class Company : public Customer
{
public:
    /* constructor */
    Company(std::string& name, std::string& address, int vat, int reduction, int yearlyBuy);

    /* getters */
    int getVat() const;
    int getReduction() const;
    int getYearlyBuy() const;

    /* setters */
    void setVat(int);
    void setReduction(int);
    void setYearlyBuy(int);

private:
    /* attributes */
    int vat;
    int reduction;
    int yearlyBuy;

    /* methods */
    int calculateReduction();
    void serialize(std::ofstream&) const override;
};

