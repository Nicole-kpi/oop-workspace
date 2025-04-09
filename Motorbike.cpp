#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(int id) : Vehicle(id) {}
int Motorbike::getParkingDuration() const{
    return static_cast<int> (Vehicle::getParkingDuration() * 0.85);
}