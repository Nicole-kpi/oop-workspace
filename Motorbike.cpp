#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(std::string id) : Vehicle(id) {}
double Motorbike::getParkingDuration() const{
    time_t now = std::time(nullptr);
    double duration = difftime(now, timeOfEntry);
    return duration * 0.85;
}