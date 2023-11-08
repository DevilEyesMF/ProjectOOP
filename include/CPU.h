#pragma once

#include "Component.h"

class CPU : public Component
{
public:
    /* constructor */
    CPU(std::string manufacturer, std::string name, float price, int stock, bool laptop, int speed, int cores,
        std::string& socket);

    /* getters */
    int getSpeed() const;
    int getCores() const;
    const std::string& getSocket() const;

    /* setters */
    void setSpeed(int);
    void setCores(int);
    void setSocket(std::string&);

protected:
    /* methods */
    void serialize(std::ofstream&) const override;

private:
    /* attributes */
    int speed;
    int cores;
    std::string socket;
};

