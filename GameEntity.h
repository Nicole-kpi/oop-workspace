#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>
#include "Effect.h"

enum GameEntityType{
    ExplosionType, 
    MineType, 
    NoneType, 
    ShipType
};

class GameEntity : public Effect{
protected:
    std::tuple<int, int> position;
    GameEntityType type;
public:
    GameEntity(int x, int y, char type)
    std::tuple<int, int> getPos() const;
    GameEntityType getType() const;

    virtual~ GameEntity() {}；
};

#endif // GAME_ENTITY_H