#include <iostream>
#include "TV.h"

int main() {
    TV tv1;
    TV tv2(150, 55.0);

    tv1.set_screenSize(40.0);
    tv1.set_powerRating(120);

    tv1.turnOn();
    tv2.turnOn();

     std::cout << "Initial screen size: "  << tv->get_screenSize() << " inches" << std::endl;
    std::cout << "New screen size: " << tv2->get_screenSize() << " inches" << std::endl;


    return 0;
}
