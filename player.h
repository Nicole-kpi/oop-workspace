#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage);

    std::string getName() const;
    int getHealth() const;
    int getDamage() const;

    void setName(std::string name);
    void setHealth(int health);
    void setDamage(int damage);

    virtual void takeDamage(int damage);
};

#endif
