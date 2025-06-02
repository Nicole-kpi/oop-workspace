// main-3.cpp
#include <iostream>
#include "Game.h"

int main() {
    // 创建 Game 对象
    Game game;

    // 初始化游戏，3 个 Ship，2 个 Mine，网格大小为 10x10
    std::vector<GameEntity*> entities = game.initGame(3, 2, 10, 10);

    std::cout << "Initial entities:\n";
    for (auto* entity : entities) {
        std::tuple<int, int> pos = entity->getPos();
        std::cout << "Type: " << entity->getType()
                  << " at (" << std::get<0>(pos) << ", " << std::get<1>(pos) << ")\n";
    }

    std::cout << "\nStarting game loop...\n";
    game.gameLoop(10, 5.0);

    return 0;
}
