#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"

class Explosion : public GameEntity, public virtual Effect {
    public:
        Explosion(): GameEntity (-1, -1, GameEntityType::ExplosionType) {}
            // Default constructor initializes position to (-1, -1)

            
        void apply(GameEntity& entity) override {
            entity.setType(GameEntityType::NoneType);
        }
};
#endif // EXPLOSION_H