#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity, public virtual Effect {
public:
    Mine(int x, int y) : GameEntity(x, y, GameEntityType::MineType) {}

    Explosion explode() {
        setType(GameEntityType::NoneType);
        return Explosion(std::get<0>(getPos()), std::get<1>(getPos()));
    }

    void apply(GameEntity& entity) override {
    }
};

#endif // MINE_H
