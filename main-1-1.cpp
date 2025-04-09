#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <ctime> 


void delay(int seconds) {
    clock_t start = clock();
    while ((clock() - start) / CLOCKS_PER_SEC < seconds) {
    }
}

int main() {
    Vehicle* vehicles[] = {
        new Car(1),
        new Bus(2),
        new Motorbike(3)
    };

   
    delay(5);

    for (int i = 0; i < 3; ++i) {
        std::cout << "Vehicle ID: " << vehicles[i]->getID() 
                  << ", Parking Duration: " 
                  << vehicles[i]->getParkingDuration()  
                  << " seconds" << std::endl;
        delete vehicles[i];
    }

    return 0;
}