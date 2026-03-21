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

