#include "Player.h"
#include <iostream>
#include "Monster.h"
#include <vector>

Player::Player(std::string name){

}
void Player::checkMonsters(){

}

void Player::removeMonster(Monster m){
    for (Monster i : monsters){
        if (i.getName() == m.getName()){
            monsters.erase(i);
        }
    }

}

void Player::addMonster(Monster m){
    monsters.push_back(m);

}
