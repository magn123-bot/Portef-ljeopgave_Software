#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster {
public:
    Monster(std::string name, int hp, int damage);
    void Attack();
    void takedamage();
    bool isalive();
    
private:
    std::string name;
    int hp;
    int damage;
};
#endif