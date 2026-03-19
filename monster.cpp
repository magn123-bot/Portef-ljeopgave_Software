#include "monster.h"
#include <iostream>

Monster::Monster(std::string name, int hp, int damage){
    std::cout<< "Your characters name: " << name<<std::endl;
    std::cout<< "Your characters hp: "<< hp<<std::endl;
    std::cout<< "Your characters damage: "<< damage<<std::endl;
}

void Monster::attack(Monster& target){
    if (&target == this){
        std::cout<< "The monster cant attack its self"<< std::endl;
        return;
    } if (!isAlive){
        std::cout<< "The monster is already dead"<< std::endl;
    } target.takeDamage(damage);
}   

void Monster::takeDamage(){

}

bool Monster::isAlive(){

}