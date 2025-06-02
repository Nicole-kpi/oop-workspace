#include <iostream>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main(){
    srand(time(nullptr)); 
    //创建Ship和Mine的对象
    Ship* ship = new Ship(4, 5);
    Mine* mine = new Mine(8, 9);

    std::cout << "Initial Ship position: ("
              << std::get<0>(ship->getPos()) << ", "
              << std::get<1>(ship->getPos()) << ")\n";

    ship->move(-1,-1);
    std::cout << "After move, position is: ("
              << std::get<0>(ship->getPos()) << ", "
              << std::get<1>(ship->getPos()) << ")\n";

    Explosion* myexplosion = mine->explode();

    myexplosion->apply(*ship);

    // 检查 ship 的类型是否已被设置为 NoneType
    std::cout << "Ship type after explosion: "
              << (ship->getType() == GameEntityType::NoneType ? "NoneType" : "Other") << "\n";

    // 清理内存
    delete ship;
    delete mine;
    delete myexplosion;

    return 0;

}