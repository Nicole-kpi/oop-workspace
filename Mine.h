#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity, public virtual Effect {
    public:
        Mine(int x, int y) : GameEntity(x, y, GameEntityType::MineType) {}


        void apply(GameEntity& entity) override {
        }
        // 爆炸函数：返回一个位置与自己相同的新 Explosion 实例

        Explosion* explode() const {
        Explosion* explosion = new Explosion();
        return explosion;
    }
};

#endif