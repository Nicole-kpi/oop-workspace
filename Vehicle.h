#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <ctime>

class Vehicle{
protected:
    time_t timeOfEntry;
    std::string ID;

public:
    Vehicle(std::string id);
    std::string getID() const;
    virtual double getParkingDuration() const = 0;
    virtual ~Vehicle() {}
};
#endif