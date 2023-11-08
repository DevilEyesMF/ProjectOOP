#pragma once

#include "Component.h"

class GPU : public Component
{
public:
    /* constructor */
    GPU(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int power, int busspeed);

    /* getters */
    int getPower() const;
    int getBusspeed() const;

    /* setters */
    void setPower(int);
    void setBusspeed(int);

protected:
    /* methods */
    void serialize(std::ofstream&) const override;

private:
    /* attributes */
    int power;
    int busspeed;
};

