#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <typeinfo>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    // 设置 entities（可用于外部测试）
    void set_entities(const std::vector<GameEntity*>& newEntities) {
        entities = newEntities;
    }

    // 获取 entities
    std::vector<GameEntity*> get_entities() const {
        return entities;
    }

    // 初始化游戏，生成 numShips 个 Ship 和 numMines 个 Mine
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        entities.clear();

        for (int i = 0; i < numShips; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }

        for (int i = 0; i < numMines; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }

        return entities;
    }

    // 模拟游戏主循环
    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            std::cout << "Iteration: " << iteration + 1 << std::endl;

            bool shipAlive = false;

            for (GameEntity* entity : entities) {
                // 找到所有 Ship
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship && ship->getType() == ShipType) {
                    shipAlive = true;
                    ship->move(1, 0);  // 向右移动 1

                    // 遍历 Mine 检查距离
                    for (GameEntity* other : entities) {
                        Mine* mine = dynamic_cast<Mine*>(other);
                        if (mine && mine->getType() == MineType) {
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance <= mineDistanceThreshold) {
                                Explosion* myexplosion = mine->explode();
                                explosion->apply(*ship);  // 爆炸影响船
                                delete myexplosion;
                                std::cout << "Ship exploded!" << std::endl;
                                break;
                            }
                        }
                    }
                }
            }
            if (!shipAlive) {
                std::cout << "🚩 All ships destroyed. Ending simulation." << std::endl;
                break;
            }
        }
    }
    // 析构函数清理实体
    ~Game() {
        for (GameEntity* entity : entities) {
            delete entity;
        }
    }
};

#endif // GAME_H