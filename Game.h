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
   
    void set_entities(const std::vector<GameEntity*>& newEntities) {
        entities = newEntities;
    }

  
    std::vector<GameEntity*> get_entities() const {
        return entities;
    }

 
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


    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            std::cout << "Iteration: " << iteration + 1 << std::endl;

            bool shipAlive = false;

            for (GameEntity* entity : entities) {
               
                Ship* ship = dynamic_cast<Ship*>(entity);
                if (ship && ship->getType() == ShipType) {
                    shipAlive = true;
                    ship->move(1, 0);  

                
                    for (GameEntity* other : entities) {
                        Mine* mine = dynamic_cast<Mine*>(other);
                        if (mine && mine->getType() == MineType) {
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance <= mineDistanceThreshold) {
                                Explosion* myexplosion = mine->explode();
                                myexplosion->apply(*ship);  
                                delete myexplosion;
                                std::cout << "Ship exploded!" << std::endl;
                                break;
                            }
                        }
                    }
                }
            }
            if (!shipAlive) {
                std::cout << "All ships destroyed. Ending simulation." << std::endl;
                break;
            }
        }
    }

    ~Game() {
        for (GameEntity* entity : entities) {
            delete entity;
        }
    }
};

#endif // GAME_H