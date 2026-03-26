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

Monster& Game::chooseenemy(){
    int index;
    std::cout<< "Choose a monster to fight"<< std::endl;
    for (int i{}; i < availableMonsters.size(); i++){
        availableMonsters[i].getStatus();
    }    
    std::cin>> index;
    Monster enemy = availableMonsters[index];
    return enemy;

}
// tilføj en funktion der får alle levende monstrer, tjek om monsters listen er == levende monstrer listen
void Game::playerTurn(){
    if (enemy.isAlive() && alive)
    Monster& enemy = chooseenemy();
    Monster& my_Monster = player.chooseMonster();
    if (!enemy.isAlive()){
        std::cout<< "Your enemy is dead"<<std::endl;
    }
    my_Monster.attack(enemy);
    std::cout<< "Attacked the enemy" << std::endl;
}

void Game::enemyTurn(){
    Monster& m = player.randomMonster();
    enemy.attack(m);
    std::cout<< "enemy attacked: "<< m.getName() << std::endl;
}


void Game::fight(){
    playerTurn();
    enemyTurn();

}