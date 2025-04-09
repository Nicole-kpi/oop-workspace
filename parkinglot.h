#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "vehicle.h"

class ParkingLot {
private:
    Vehicle** vehicles;
    int capacity;
    int count;
public:
    ParkingLot(int cap);
    ~ParkingLot();
    void parkVehicle(Vehicle* v);
    void unparkVehicle(std::string id);
    int getCount() const;
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif