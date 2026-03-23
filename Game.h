#ifndef GAME_H
#define GAME_H
#include "Player.h"

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
};



#endif