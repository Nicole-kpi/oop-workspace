#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*> get_entities() const {
        return entities;
    }

    void set_entities(const std::vector<GameEntity*>& newEntities) {
        entities = newEntities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        for (int i = 0; i < numShips; ++i) {
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }

        for (int i = 0; i < numMines; ++i) {
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }

        return entities;
    }

    // 添加 verbose 参数用于控制输出
    void gameLoop(int maxIterations, double mineDistanceThreshold, bool verbose = true) {
        for (int iter = 0; iter < maxIterations; ++iter) {
            if (verbose) std::cout << "Iteration: " << iter + 1 << "\n";

            std::vector<std::pair<Ship*, Mine*>> shipsToExplode;

            for (GameEntity* entity : entities) {
                if (entity->getType() == ShipType) {
                    Ship* ship = dynamic_cast<Ship*>(entity);
                    ship->move(1, 0);

                    for (GameEntity* other : entities) {
                        if (other->getType() == MineType) {
                            Mine* mine = dynamic_cast<Mine*>(other);
                            double dist = Utils::calculateDistance(ship->getPos(), mine->getPos());

                            if (dist <= mineDistanceThreshold) {
                                shipsToExplode.emplace_back(ship, mine);
                                break;
                            }
                        }
                    }
                }
            }

            for (auto& pair : shipsToExplode) {
                Mine* mine = pair.second;
                Ship* ship = pair.first;

                Explosion explosion = mine->explode();
                explosion.apply(*ship);

                if (verbose) std::cout << "Ship exploded!\n";
            }

            for (GameEntity* e : entities) {
                //std::cout << "Entity Type: " << e->getType() << "\n";
            }

            bool anyShipAlive = false;
            for (GameEntity* e : entities) {
                if (e->getType() == ShipType) {
                    anyShipAlive = true;
                    break;
                }
            }

            if (!anyShipAlive) {
                break;
            }
        }
    }

    ~Game() {
        for (GameEntity* e : entities) {
            delete e;
        }
        entities.clear();
    }
};

#endif // GAME_H
