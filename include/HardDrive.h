#pragma once

#include "Component.h"

class HardDrive : public Component
{
public:
    /* constructor */
    HardDrive(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, int speed, int size,
              std::string& slot);

    /* getters */
    int getSpeed() const;
    int getSize() const;
    const std::string& getSlot() const;

    /* setters */
    void setSpeed(int);
    void setSize(int);
    void setSlot(std::string&);

protected:
    /* methods */
    void serialize(std::ofstream&) const override;

private:
    /* attributes */
    int speed;
    int size;
    std::string slot;
};