#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance{
private:
    double volume;

public:
    Fridge();
    Fridge(int powerRating, double volume);

    void set_volume(double volume);
    double get_volume() const;

    double getPowerConsumption() override;
};

#endif