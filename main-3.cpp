#include <iostream>
#include "Game.h"


int main() {
    // 创建 Game 对象
    Game game;

    // 初始化游戏：3 个 Ship，2 个 Mine，网格大小 10x10
    std::vector<GameEntity*> entities = game.initGame(3, 2, 10, 10);
    game.set_entities(entities);

    std::cout << "Game initialized with " << entities.size() << " entities.\n";

    // 运行游戏循环：最多 10 次迭代，爆炸距离阈值为 2.0
    game.gameLoop(10, 5.0);

    std::cout << "Game finished.\n";

    return 0;
}
