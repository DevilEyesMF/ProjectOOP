#pragma once

#include <string>
#include <fstream>

class Component
{
public:
    /* enums */
    enum Type
    {
        ABSTRACT,
        CASE,
        CPU,
        GPU,
        HARDDRIVE,
        MEMORY,
        MOTHERBOARD,
        POWERSUPPLY
    };

    /* constructor */
    Component(std::string& manufacturer, std::string& name, float price, int stock, bool laptop);

    /* getters */
    const std::string& getManufacturer() const;
    const std::string& getName() const;
    float getPrice() const;
    int getStock() const;
    Type getType() const;
    int getLaptop() const;

    /* setters */
    void setManufacturer(std::string&);
    void setName(std::string&);
    void setPrice(float);
    void setStock(int);
    void setType(Type);
    void setLaptop(bool);

    /* methods */
    virtual void serialize(std::ofstream&) const;
    virtual void deserialize(std::ifstream&) const;

protected:
    /* attributes */
    Type type;

private:
    /* attributes */
    std::string manufacturer;
    std::string name;
    float price;
    int stock;
    bool laptop;
};

