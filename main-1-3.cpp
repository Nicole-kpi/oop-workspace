#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <unistd.h>

int main() {
    ParkingLot lot(10);
    
    for (int i = 1; i <= 5; ++i) {
        lot.parkVehicle(new Car(i));
    }
    for (int i = 6; i <= 8; ++i) {
        lot.parkVehicle(new Bus(i));
    }
    for (int i = 9; i <= 10; ++i) {
        lot.parkVehicle(new Motorbike(i));
    }
    
    sleep(20); 
    
    std::cout << "Overstaying vehicles: " 
              << lot.countOverstayingVehicles(15) 
              << std::endl;
    
    return 0;
}