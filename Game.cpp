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

void Game::enemies(){
    availableMonsters = {
    {"Hest", 4, 1},
    {"Weak Goblin", 4, 2},
    {"Strong Goblin", 8, 3},
    {"Stronger Goblin", 10, 4},
    {"Den stærkeste Goblin", 15, 5},
    {"Abe Kongen", 30, 5},
    {"Enhjørning", 50, 8},
    {"Drage", 100, 10}};
}

void Game::fight(){
    for (int i{}; i < availableMonsters.size(); i++){
        std::cout<<"hej";
    }    
}