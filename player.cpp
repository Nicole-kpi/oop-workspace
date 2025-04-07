#include "player.h"
#include <iostream>

Player::Player(std::string name, int health, int damage)
    : name(name), health(health), damage(damage) {}

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getDamage() const { return damage; }

void Player::setName(std::string name) { this->name = name; }
void Player::setHealth(int health) { this->health = health; }
void Player::setDamage(int damage) { this->damage = damage; }

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
