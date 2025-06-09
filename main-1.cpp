#include <iostream>
#include "Utils.h"

int main(){
    srand(time(0)); // intialize random seed

    int gridWidth = 10;
    int gridHeight = 10;
    
    auto a = Utils::generateRandomPos(gridWidth, gridHeight);
    auto b = Utils::generateRandomPos(gridWidth, gridHeight);

    std::cout << "Position 1: (" << a.first << ", " << a.second << ")\n";
    std::cout << "Position 2: (" << b.first << ", " << b.second << ")\n";

    //print and calculate distance
    double distance = Utils::calculateDistance(a, b);
    std::cout << "Distance between Position 1 and Position 2: " << distance << "\n";
    
    return 0;
}