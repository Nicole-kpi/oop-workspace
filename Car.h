#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string id);
    double getParkingDuration() const override;
};

#endif
