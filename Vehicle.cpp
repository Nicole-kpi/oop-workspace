#include "Vehicle.h"
Vehicle:: Vehicle(std::string id) : ID(id){
    timeOfEntry = std::time(nullptr);
}
    std::string Vehicle::getID() const{
        return ID;
    }
