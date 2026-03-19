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

void Monster::getStatus(){
    if (!isAlive){
        std::cout<< name<< "Is dead"<< std::endl;
    }
    std::cout<< name << " | HP:"<< hp<< std::endl;

}

bool Monster::isAlive(){
    return hp > 0;
}