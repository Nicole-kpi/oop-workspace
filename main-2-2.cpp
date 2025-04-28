#include <iostream>
#include "TV.h"

int main() {
    TV tv1;
    TV tv2(150, 55.0);

    tv1.setScreenSize(40.0);
    tv1.set_powerRating(120);

    tv1.turnOn();
    tv2.turnOn();

     std::cout << "Initial screen size: "  << tv1->getScreenSize() << " inches" << std::endl;
    std::cout << "New screen size: " << tv2->getScreenSize() << " inches" << std::endl;


    return 0;
}
