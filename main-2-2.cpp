#include <iostream>
#include "Fridge.h"

int main() {
    Fridge fridge1;
    Fridge fridge2(200, 300.0);

    fridge1.set_volume(150.0);
    fridge1.set_powerRating(100);

    fridge1.turnOn();
    fridge2.turnOn();

    std::cout << "Fridge1 Power Consumption: " << fridge1.getPowerConsumption() << std::endl;
    std::cout << "Fridge2 Power Consumption: " << fridge2.getPowerConsumption() << std::endl;

    return 0;
}
