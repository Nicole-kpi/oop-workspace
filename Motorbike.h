#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"

class Motorbike : public Vehicle{
public:
    Motorbike(std::string id);
    double getParkingDuration() const override;
};
#endif