#include "Monster.h"
#include <iostream>

Monster::Monster() : name(""), hp(0), damage(0) {}

Monster::Monster(std::string name, int hp, int damage)
    : name(name), hp(hp), damage(damage) {}

void Monster::attack(Monster& target){
    if (&target == this){
        return;
    } if (!isAlive()){
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

void Monster::getStatus() const{
    if (!isAlive()){
        std::cout<< name<< "Is dead"<< std::endl;
    }
    std::cout<< name << " | HP:"<< hp<< " | dmg: "<< damage<< std::endl;

}

bool Monster::isAlive() const{
    return hp > 0;
}


std::string Monster::getName() const{
    return name;
}

int Monster::getHp() const{
    return hp;
}