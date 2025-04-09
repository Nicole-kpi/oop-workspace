#include "car.h"
#include <ctime>

Car::Car(std::string id) : Vehicle(id) {}
double Car::getParkingDuration() const{
    time_t now = std::time(nullptr);
    double duration = difftime(now, timeOfEntry);
    return duration * 0.9;
}