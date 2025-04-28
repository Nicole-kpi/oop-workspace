#include <iostream>
#include "Fridge.h"

int main() {
    Fridge fridge1;
    Fridge fridge2(200, 300.0);

    fridge1.setVolume(150.0);
    fridge1.set_powerRating(100);

    fridge1.turnOn();
    fridge2.turnOn();

    std::cout << "Initial volume: " << fridge1->getVolume() << " litres" << std::endl;
    std::cout << "New volume: " <<  fridge2->getVolume() << " litres" << std::endl;
    return 0;
}
