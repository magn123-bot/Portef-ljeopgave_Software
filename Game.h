#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include <vector>
#include <string>




class Game{
public:
    void run();
private:
    void startGame();
    void stopGame();
    void fight();
    Player player;
    bool running = true;
    void Game::enemies();
    std::vector<Monster> availableMonsters;
};



#endif