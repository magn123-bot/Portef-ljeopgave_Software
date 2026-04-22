#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "monster.h"
#include <vector>
#include <string>




class Game {
public:
    void run();
private:
    void startGame();
    void stopGame();
    Monster& chooseenemy();
    void fight();
    Player player;
    bool running = true;
    void enemies();
    std::vector<Monster> availableMonsters;
    Monster enemy;
    void playerTurn();
    void enemyTurn();
    Monster getOriginalEnemy();
    void afterFight();
    std::string awnser;
};



#endif