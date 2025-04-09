#include "Bus.h"
#include <ctime>
Bus::Bus(int id) : Vehicle(id) {}
int Bus::getParkingDuration() const{
    return static_cast<int>(Vehicle::getParkingDuration() * 0.75);
}