#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus : public Vehicle{
public:
    Bus(std::string id);
    double getParkingDuration() const override;
};
#endif