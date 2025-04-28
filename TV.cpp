#include "TV.h"

TV::TV() : Appliance(), screenSize(0.0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::set_screenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::get_screenSize() const {
    return screenSize;
}

double TV::getPowerConsumption() {
    return get_powerRating() * (screenSize / 10);
}
