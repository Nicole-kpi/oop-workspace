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

int Vehicle::getParkingDuration() const{
    std::time_t currentTime = std::time(nullptr);
    return static_cast<int>(difftime(currentTime, timeOfEntry));
}
