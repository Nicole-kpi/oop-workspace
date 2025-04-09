#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity) {}

ParkingLot::~ParkingLot() {
    for (auto vehicle : vehicles) {
        delete vehicle;
    }
}

int ParkingLot::getCount() const {
    return vehicles.size();
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (vehicles.size() >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        delete vehicle;
        return;
    }
    vehicles.push_back(vehicle);
}

void ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            delete *it;
            vehicles.erase(it);
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(double maxParkingDuration) const {
    int count = 0;
    for (const auto vehicle : vehicles) {
        if (vehicle->getParkingDuration() > maxParkingDuration) {
            ++count;
        }
    }
    return count;
}