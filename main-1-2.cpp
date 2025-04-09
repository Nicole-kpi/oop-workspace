#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    std::vector<Vehicle*> vehicles;

    vehicles.push_back(new Car("C1"));
    vehicles.push_back(new Bus("B1"));
    vehicles.push_back(new Motorbike("M1"));

    std::this_thread::sleep_for(std::chrono::seconds(10));

    for (auto v : vehicles) {
        std::cout << v->getID() << " stayed for " << v->getParkingDuration() << " seconds" << std::endl;
    }

    for (auto v : vehicles) {
        delete v;
    }

    return 0;
}
