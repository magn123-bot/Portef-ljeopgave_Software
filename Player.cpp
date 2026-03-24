#include "Player.h"
#include <iostream>
#include "Monster.h"
#include <vector>

Player::Player(std::string name){

}
void Player::checkMonsters(){
    for (Monster i : monsters){
        std::cout<< i.getName()<< std::endl;
    }
}

void Player::removeMonster(Monster m){
    for (int i{}; i < monsters.size(); i++){
        if (monsters[i].getName() == m.getName()){
            monsters.erase(monsters.begin() + i);
        }
    }

}

void Player::addMonster(Monster m){
    monsters.push_back(m);

}

Monster& Player::chooseMonster(){
    checkMonsters();
    while (true) {
    std::cout<< "Choose a monster to fight: "<< std::endl;
    std::string choice;
    std::cin>> choice;
 
    for (int i{}; i < monsters.size(); i++){
        if (choice == monsters[i].getName()) {
            return monsters[i];
        } 
    }
    std::cout<< " Invalid choice, try again " << std::endl;
    }
}

