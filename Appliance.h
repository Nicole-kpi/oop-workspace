#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
private:
    int powerRating;
    bool isOn;
public:
    Appliance();
    Appliance(int powerRating);

    void setPowerRating(int powerRating);
    int getPowerRating() const;

    void setIsOn(bool isOn);
    bool getIsOn() const;

    void turnOn();
    void turnOff();

    virtual double getPowerConsumption();
    virtual ~Appliance() {}


};
#endif
