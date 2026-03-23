#include "Game.h"
#include "Monster.h"
#include "Player.h"
#include <iostream>


void Game::startGame(){
    std::string name;
    std::cin>> name;
    player = Player(name);
}

void Game::stopGame(){
    std::cout<< "Thanks for playing"<<std::endl;
    running = false;
}


void Game::fight(){
    
}