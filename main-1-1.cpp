#include <iostream>
#include "Appliance.h"

int main() {
    Appliance app1;
    Appliance app2(1000);

    app1.turnOn();
    app2.turnOff();

    std::cout << "App1 Power Rating: " << app1.getPowerRating() << ", Is On: " << app1.getIsOn() << std::endl;
    std::cout << "App2 Power Rating: " << app2.getPowerRating() << ", Is On: " << app2.getIsOn() << std::endl;
    std::cout << "App1 Power Consumption: " << app1.getPowerConsumption() << std::endl;

    return 0;
}
