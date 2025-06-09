#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>
#include "Effect.h"

enum GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity : public virtual Effect {
protected:
    std::pair<int, int> position;
    GameEntityType type;

public:
    GameEntity(int x, int y, GameEntityType t) {
        position = std::make_tuple(x, y);
        type = t;
    }
    std::pair<int, int> getPos() const {
        return position;
    }
    GameEntityType getType() const {
        return type;
    }
    void setType(GameEntityType t) {
        type = t;
    }
    void setPosition(int x, int y) {
        position = std::make_pair(x, y);
    }

    virtual ~GameEntity() {}
};

#endif // GAME_ENTITY_H