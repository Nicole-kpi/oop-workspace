#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
private:
    int powerRating;
    bool isOn;
public:
    Appliance();
    Appliance(int powerRating);

    void set_powerRating(int powerRating);
    int get_powerRating() const;

    void set_isOn(bool isOn);
    bool ge_isOn() const;

    void turnOn();
    void turnOff();

    virtual double getPowerConsumption();
    virtual ~Appliance() {}


};
#endif
