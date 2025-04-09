#include "Bus.h"
#include <ctime>
Bus::Bus(std::string id) : Vehicle(id) {}
double Bus::getParkingDuration() const{
    time_t now = std::time(nullptr);
    double duration = difftime(now, timeOfEntry);
    return duration * 0.75;
}