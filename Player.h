#ifndef PLAYER_H
#define PLAYER_H
#include "Monster.h"
#include <iostream>
#include <vector>

class Player{
public:
    Player(std::string name);
    void checkMonsters();
    void removeMonster(Monster m);
    void addMonster(Monster m);
    Monster& chooseMonster();
    Monster& Player::randomMonster();

private:
        std::vector<Monster> monsters;
        std::string name;

};
#endif