#include "Vehicle.h"
Vehicle:: Vehicle(int id) : ID(id){
    timeOfEntry = std::time(nullptr);
}
int Vehicle::getID() const{
        return ID;
}

std::time_t Vehicle::getTimeOfEntry() const{
    return timeOfEntry;
}

double Vehicle::getParkingDuration() const{
    std::time_t currentTime = std::time(nullptr);
    return difftime(currentTime, timeOfEntry);
}
