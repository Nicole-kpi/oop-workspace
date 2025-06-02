#include <iostream>
#include <tuple>
#include <ctime> 
#include "GameEntity.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main() {
    srand(time(nullptr)); 

    Ship* ship = new Ship(4, 5);
    Mine* mine = new Mine(8, 9);

    std::cout << "Initial Ship position: ("
              << std::get<0>(ship->getPos()) << ", "
              << std::get<1>(ship->getPos()) << ")\n";

    ship->move(-1, -1);

    std::cout << "After move, position is: ("
              << std::get<0>(ship->getPos()) << ", "
              << std::get<1>(ship->getPos()) << ")\n";

    Explosion* explosion = mine->explode();
    explosion->apply(*ship);

    std::cout << "Ship type after explosion: "
              << (ship->getType() == GameEntityType::NoneType ? "NoneType" : "Other")
              << " (" << ship->getType() << ")" << "\n";

    delete ship;
    delete mine;
    delete explosion;

    return 0;
}
