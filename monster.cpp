#include "monster.h"
#include <iostream>

Monster::Monster(std::string name, int hp, int damage){
    std::cout<< "Your characters name: " << name<<std::endl;
    std::cout<< "Your characters hp: "<< hp<<std::endl;
    std::cout<< "Your characters damage: "<< damage<<std::endl;
}

void Monster::attack(Monster& target){
    if (&target == this){
        return;
    } if (!isAlive){
        return;
    } 
    target.takeDamage(damage);
    
}

void Monster::takeDamage(int damage){
    hp -= damage;
    if (hp < 0){
        hp = 0;
    }
}

bool Monster::isAlive(){
    if (hp == 0){
        return false;
    } return true;
}