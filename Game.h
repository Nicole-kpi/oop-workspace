#ifndef GAME_H
#define GAME_H

#include <vector>
#include <cmath>
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
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i < numMines; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iter = 0; iter < maxIterations; ++iter) {
            std::cout << "Iteration: " << iter + 1 << std::endl;
            for (GameEntity* entity : entities) {
                if (entity->getType() == ShipType) {
                    Ship* ship = dynamic_cast<Ship*>(entity);
                    ship->move(1, 0);  

                    for (GameEntity* other : entities) {
                        if (other->getType() == MineType) {
                            Mine* mine = dynamic_cast<Mine*>(other);
                            double dist = Utils::calculateDistance(ship->getPos(), mine->getPos());

                            if (dist < mineDistanceThreshold) {
                                Explosion explosion = mine->explode();
                                explosion.apply(*ship);
                                std::cout << "Ship exploded!" << std::endl;
                            }
                        }
                    }
                }
            }

            for (GameEntity* e : entities) {
                std::cout << "Entity Type: " << e->getType() << std::endl;
            }
        }
    }

    ~Game() {
        for (auto* e : entities) {
            delete e;
        }
        entities.clear();
    }
};

#endif // GAME_H
