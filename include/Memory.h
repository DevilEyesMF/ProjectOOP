#pragma once

#include "Component.h"

class Memory : public Component
{
public:
    /* constructor */
    Memory(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int size, int speed);

    /* getters */
    int getSize() const;
    int getSpeed() const;

    /* setters */
    void setSize(int);
    void setSpeed(int);

protected:
    /* methods */
    void serialize(std::ofstream&) const override;

private:
    /* attributes */
    int size;
    int speed;
};

