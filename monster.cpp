#include "monster.h"
#include <iostream>

Monster::Monster(std::string name, int hp, int damage){
    std::cout<< "Your characters name: " << name<<std::endl;
    std::cout<< "Your characters hp: "<< hp<<std::endl;
    std::cout<< "Your characters damage: "<< damage<<std::endl;
}


