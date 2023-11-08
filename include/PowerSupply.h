#pragma once

#include "Component.h"

class PowerSupply : public Component
{
public:
    /* constructor */
    PowerSupply(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int power,
                std::string& certification);

    /* getters */
    int getPower() const;
    const std::string& getCertification() const;

    /* setters */
    void setPower(int);
    void setCertification(std::string&);

private:
    /* attributes */
    int power;
    std::string certification;
};

