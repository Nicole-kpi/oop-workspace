#ifndef BUS_H
#define BUS_H
#include "vehicle.h"

class Bus : public Vehicle{
public:
    Bus(std::string id);
    double getParkingDuration() const override;
};
#endif