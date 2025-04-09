#include "ParkingLot.h"
#include "Car.h"
#include <iostream>

int main() {
    ParkingLot lot(10);

    // Park vehicles until full
    for (int i = 1; i <= 11; ++i) {
        lot.parkVehicle(new Car(i));
    }

    // Unpark a vehicle
    lot.unparkVehicle(5);
    lot.unparkVehicle(99); // Should print "Vehicle not in the lot"

    return 0;
}