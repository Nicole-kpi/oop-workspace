#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*> get_entities() const { return entities; }
    void set_entities(const std::vector<GameEntity*>& new_entities) { entities = new_entities; }

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
        for (int iter = 1; iter <= maxIterations; ++iter) {
            std::cout << "Iteration: " << iter << std::endl;
            for (auto* entity : entities) {
                if (entity->getType() == GameEntityType::ShipType) {
                    Ship* ship = dynamic_cast<Ship*>(entity);
                    ship->move(1, 0);
                }
            }

            for (auto* ship_entity : entities) {
                if (ship_entity->getType() != GameEntityType::ShipType) continue;
                Ship* ship = dynamic_cast<Ship*>(ship_entity);

                for (auto* mine_entity : entities) {
                    if (mine_entity->getType() != GameEntityType::MineType) continue;
                    Mine* mine = dynamic_cast<Mine*>(mine_entity);

                    double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                    if (distance <= mineDistanceThreshold) {
                       Explosion* explosion = mine->explode();
                        explosion->apply(*ship);
                        delete explosion;

                        std::cout << "Ship exploded!\n";
                        std::cout << "Entity Type: " << ship->getType() << std::endl;;
                    }
                }
            }

            // Check if all ships destroyed
            bool allDestroyed = true;
            for (auto* entity : entities) {
                if (entity->getType() == GameEntityType::ShipType)
                    allDestroyed = false;
            }
            if (allDestroyed) break;
        }
    }

    ~Game() {
        for (auto* e : entities) delete e;
    }
};

#endif