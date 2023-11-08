#pragma once

#include "Component.h"

class Case : public Component
{
public:
    /* constructor */
    Case(std::string& manufacturer, std::string& name, float price, int stock, bool laptop, std::string& color,
         std::string& motherboardSize, std::string& material);

    /* getters */
    const std::string& getColor() const;
    const std::string& getMotherboardSize() const;
    const std::string& getMaterial() const;

    /* setters */
    void setColor(std::string&);
    void setMotherboardSize(std::string&);
    void setMaterial(std::string&);

protected:
    void serialize(std::ofstream& filestream) const override;

private:
    /* attributes */
    std::string color;
    std::string motherboardSize;
    std::string material;
};

