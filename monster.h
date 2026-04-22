#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    Monster();
    Monster(std::string name, int hp, int damage);
    void attack(Monster& target);
    void takeDamage(int damage);
    void getStatus() const;
    bool isAlive() const;
    std::string getName() const;
    int getHp() const;

private:
    std::string name;
    int hp;
    int damage;
};
#endif