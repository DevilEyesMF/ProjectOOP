#pragma once

#include "Component.h"

class Motherboard : public Component
{
public:
    /* constructor */
    Motherboard(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, std::string& socket,
                int memorySlots, std::string& size);

    /* getters */
    const std::string& getSocket() const;
    int getMemorySlots() const;
    const std::string& getSize() const;

    /* setters */
    void setSocket(std::string&);
    void setMemorySlots(int);
    void setSize(std::string&);

private:
    /* attributes */
    std::string socket;
    int memorySlots;
    std::string size;
};

