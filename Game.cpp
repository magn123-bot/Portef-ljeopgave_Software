#include "Game.h"
#include "Monster.h"
#include "Player.h"
#include <iostream>


void Game::startGame(){
    std::string name;
    std::cin>> name;
    player = Player(name);
    player.addMonster(availableMonsters[0]);
    player.addMonster(availableMonsters[0]);
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
    if (player.aliveAllyMonsters().empty()){
        std::cout<< "All your monsters is dead"<<std::endl;
    }
    if (!enemy.isAlive()){
        std::cout<< "Your enemy is dead"<<std::endl;
    }
    Monster& my_Monster = player.chooseMonster();
    
    my_Monster.attack(enemy);
    std::cout<< "Attacked the enemy" << enemy.getName()<< std::endl;
}

void Game::enemyTurn(){
    if (!enemy.isAlive()){
        return;
    }
    if (player.aliveAllyMonsters().empty()){
        std::cout<< "All your monsters is dead"<<std::endl;
    }
    Monster& target = player.randomMonster();

    enemy.attack(target);
    std::cout<< "enemy attacked: "<< target.getName() << std::endl;
}


void Game::fight(){

    while(enemy.isAlive() && !player.aliveAllyMonsters().empty()){
        playerTurn();
        enemyTurn();
        
    }
    if (!enemy.isAlive()){
        player.addMonster(getOriginalEnemy());
    }

}

Monster Game::getOriginalEnemy(){
    for (Monster i : availableMonsters){
        if (enemy.getName() == i.getName()){
            return i;
            running = false;
        }
    }}


bool Game::afterFight(){
    std::cout<< "Would you like to continue y/n: ";
    std::cin>> awnser;
    if (awnser == "y"){
        return true;
    }else {
        return false;
    }
}
void Game::run(){
    startGame();
    Monster& enemy = chooseenemy();
    while (running){
        fight();
    }

}