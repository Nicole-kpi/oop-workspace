#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"

class Explosion : public GameEntity, public virtual Effect {
public:
    Explosion() : GameEntity(-1, -1, GameEntityType::ExplosionType) {}

    Explosion(int x, int y) : GameEntity(x, y, GameEntityType::ExplosionType) {}

    void apply(GameEntity& entity) override {
        entity.setType(GameEntityType::NoneType);
        entity.setPosition(-1, -1);
    }
};

#endif // EXPLOSION_H
