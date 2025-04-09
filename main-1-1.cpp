#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <thread>
#include <chrono>

int main() {
    Car c("C1");
    Bus b("B1");
    Motorbike m("M1");

    std::cout << "Testing vehicle IDs..." << std::endl;
    std::cout << c.getID() << ", " << b.getID() << ", " << m.getID() << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << "Parking durations after 5 seconds:" << std::endl;
    std::cout << "Car: " << c.getParkingDuration() << " seconds\n";
    std::cout << "Bus: " << b.getParkingDuration() << " seconds\n";
    std::cout << "Motorbike: " << m.getParkingDuration() << " seconds\n";

    return 0;
}

