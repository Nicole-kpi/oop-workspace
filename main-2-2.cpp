#include <iostream>
#include "TV.h"

int main() {
    TV tv1;
    TV tv2(150, 55.0);

    tv1.set_screenSize(40.0);
    tv1.set_powerRating(120);

    tv1.turnOn();
    tv2.turnOn();

    std::cout << "TV1 Power Consumption: " << tv1.getPowerConsumption() << std::endl;
    std::cout << "TV2 Power Consumption: " << tv2.getPowerConsumption() << std::endl;

    return 0;
}
