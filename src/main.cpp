#include <iostream>
#include <string>

#include "../include/Case.h"
#include "../include/Company.h"
#include "../include/Computershop.h"
#include "../include/CPU.h"
#include "../include/Customer.h"
#include "../include/GPU.h"
#include "../include/HardDrive.h"
#include "../include/Invoice.h"
#include "../include/Memory.h"
#include "../include/Motherboard.h"
#include "../include/PowerSupply.h"

using namespace std;

int main()
{
    string shopName = "Deze noten";
    string shopAddress = "myStreet";
    string placeholder = "placeholder";

    const string filename = "../test.bin";

    Computershop computershop = Computershop(shopName, shopAddress);

    computershop.addComponent(new CPU(placeholder, placeholder, 329.00, 0, false, 3600, 8, placeholder));
    computershop.addCustomer(new Customer(placeholder, placeholder));
    computershop.addCustomer(
            new Company(placeholder, placeholder, 21, 0, 0));

    for (Component* co : computershop.getComponents())
    {
        if (CPU* c = dynamic_cast<CPU*>(co))
        {
            cout << "Type: " << c->getType() << "\n"
                 << "Manufacturer: " << c->getManufacturer() << "\n"
                 << "Name: " << c->getName() << "\n"
                 << "Price: " << c->getPrice() << " EUR\n"
                 << "Stock: " << c->getStock() << "\n"
                 << "Laptop: " << (c->getLaptop() ? "Yes" : "No") << "\n"
                 << "Speed: " << c->getSpeed() << " MHz\n"
                 << "Cores: " << c->getCores() << "\n"
                 << "Socket: " << c->getSocket() << endl;
        }
    }

    for (Customer* cu : computershop.getCustomers())
    {
        cout << (cu->getCompany() ? "Business" : "Private individual") << "\n"
             << "Name: " << cu->getName() << "\n"
             << "Address: " << cu->getAddress() << "\n";

        if (Company* c = dynamic_cast<Company*>(cu))
        {
            cout << "VAT: " << c->getVat() << "\n"
                 << "Reduction: " << c->getReduction() << "\n"
                 << "Yearly Buy: " << c->getYearlyBuy() << endl;
        }
    }

    computershop.saveToFile(filename);

    return 0;
}