#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Parkinglot.h"

int main() {
    ParkingLot lot(10);

    lot.parkVehicle(new Car("C1"));
    lot.parkVehicle(new Car("C2"));
    lot.parkVehicle(new Car("C3"));
    lot.parkVehicle(new Car("C4"));
    lot.parkVehicle(new Car("C5"));

    lot.parkVehicle(new Bus("B1"));
    lot.parkVehicle(new Bus("B2"));
    lot.parkVehicle(new Bus("B3"));

    lot.parkVehicle(new Motorbike("M1"));
    lot.parkVehicle(new Motorbike("M2"));
    std::this_thread::sleep_for(std::chrono::seconds(20));

    int overstayingCount = lot.countOverstayingVehicles(15);
    std::cout << overstayingCount << std::endl;

    return 0;
}

