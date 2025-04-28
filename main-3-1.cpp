#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main() {
    House house(3);

    Fridge* fridge = new Fridge(200, 250.0);
    TV* tv = new TV(150, 50.0);
    Appliance* appliance = new Appliance(100);

    house.addAppliance(fridge);
    house.addAppliance(tv);
    house.addAppliance(appliance);

    std::cout << "Total Power Consumption in House: " << house.getTotalPowerConsumption() << std::endl;

    return 0;
}
