#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10); 

    
    lot.parkVehicle(new Car("C1"));
    lot.parkVehicle(new Car("C2"));
    lot.parkVehicle(new Car("C3"));
    lot.parkVehicle(new Bus("B1"));
    lot.parkVehicle(new Motorbike("M1"));

    std::cout << "Vehicles parked. Waiting...\n";

    std::this_thread::sleep_for(std::chrono::seconds(20));

    int overstayingCount = lot.countOverstayingVehicles(15);
    std::cout << "Vehicles overstaying more than 15 seconds: " << overstayingCount << std::endl;

    return 0;
}
