#include <iostream>
#include "Utils.h"

int main(){
    srand(time(0)); // intialize random seed

    int gridWidth = 10;
    int gridHeight = 10;
    
    auto pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    auto pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    //print and calculate distance
    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between Position 1 and Position 2: " << distance << "\n";
    
    return 0;
}