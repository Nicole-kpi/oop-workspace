#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>

class ParkingLot {
private:
    std::vector<Vehicle*> vehicles;
    int maxCapacity;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    
    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int countOverstayingVehicles(double maxParkingDuration) const;
};

#endif