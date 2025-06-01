#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity, public virtual Effect {
public:
    Ship(int x, int y) : GameEntity(x, y, GameEntityType::ShipType) {}

    void move(int dx, int dy) {
        // Update the ship's position by dx and dy
        int newX = std::get<0>(position) + dx;
        int newY = std::get<1>(position) + dy;
        position = std::make_tuple(newX, newY);
    }
    void apply(GameEntity& entity) override {
    }
};

#endif // SHIP_H