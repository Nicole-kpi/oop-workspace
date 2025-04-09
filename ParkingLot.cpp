#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int cap) : capacity(cap), count(0) {
    vehicles = new Vehicle*[capacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

void ParkingLot::parkVehicle(Vehicle* v) {
    if (count >= capacity) {
        std::cout << "The lot is full\n";
        delete v;
        return;
    }
    vehicles[count++] = v;
}

void ParkingLot::unparkVehicle(std::string id) {
    for (int i = 0; i < count; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            for (int j = i; j < count - 1; ++j) {
                vehicles[j] = vehicles[j + 1];
            }
            --count;
            return;
        }
    }
    std::cout << "Vehicle not in the lot\n";
}

int ParkingLot::getCount() const {
    return count;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int total = 0;
    for (int i = 0; i < count; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            ++total;
        }
    }
    return total;
}
