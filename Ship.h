#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"
#include "Effect.h" 

class Ship : public GameEntity, public virtual Effect {
public:
    Ship(int x, int y) : GameEntity(x, y, GameEntityType::ShipType) {}


    void move(int dx, int dy) {
        int x, y;
        std::tie(x, y) = getPos();
        setPosition(x + dx, y + dy); 
    }

    void apply(GameEntity& entity) override {
    }
};

#endif // SHIP_H
