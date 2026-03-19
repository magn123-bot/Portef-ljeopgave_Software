#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    Monster(std::string name, int hp, int damage);
    void attack(Monster& target);
    void takeDamage(int damage);
    void getStatus();
    bool isAlive();

private:
    std::string name;
    int hp;
    int damage;
};
#endif