#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false) {}

Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

void Appliance::setPowerRating(int powerRating) {
    this->powerRating = powerRating;
}

int Appliance::getPowerRating() const {
    return powerRating;
}

void Appliance::setIsOn(bool isOn) {
    this->isOn = isOn;
}

bool Appliance::getIsOn() const {
    return isOn;
}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

double Appliance::getPowerConsumption() {
    return 0.0;
}
