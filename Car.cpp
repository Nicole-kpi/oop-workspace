#include "Car.h"
#include <ctime>

Car::Car(int id) : Vehicle(id) {}
double Car::getParkingDuration() const{
    time_t now = std::time(nullptr);
    double duration = difftime(now, timeOfEntry);
    return duration * 0.9;
}