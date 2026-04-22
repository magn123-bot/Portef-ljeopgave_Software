#ifndef PLAYER_H
#define PLAYER_H
#include "Monster.h"
#include <iostream>
#include <vector>

class Player{
public:
    Player() = default;
    Player(std::string name);
    void checkMonsters();
    void removeMonster(const Monster& m);
    void addMonster(Monster m);
    Monster& chooseMonster();
    Monster& randomMonster();
    std::vector<Monster*> aliveAllyMonsters();
    void removeDeadMonsters();


private:
        std::vector<Monster> monsters;
        std::string name;
        std::vector<Monster*> aliveMonsters;

};
#endif