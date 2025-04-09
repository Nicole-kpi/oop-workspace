#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

int main() {
    Vehicle* vehicles[3];
    vehicles[0] = new Car(1);
    vehicles[1] = new Bus(2);
    vehicles[2] = new Motorbike(3);

    for (int i = 0; i < 3; ++i) {
        std::cout << "Vehicle ID: " << vehicles[i]->getID() 
                  << ", Parking Duration: " << vehicles[i]->getParkingDuration() 
                  << " seconds" << std::endl;
        delete vehicles[i];
    }

    return 0;
}