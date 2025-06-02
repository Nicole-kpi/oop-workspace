#include <iostream>
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"
#include "Utils.h"

int main() {
    
    Mine* mine = new Mine(5, 5);
    Ship* ship = new Ship(5, 6);  

    std::cout << "Iteration: 1\n";

   
    double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());

    if (distance <= 2.0) {  
        Explosion* myexplosion = mine->explode();
        myexplosion->apply(*ship);  
        delete myexplosion;
        std::cout << "Ship exploded!\n";
    }


    std::cout << "Entity Type: " << mine->getType() << std::endl;

    delete ship;
    delete mine;

    return 0;
}

