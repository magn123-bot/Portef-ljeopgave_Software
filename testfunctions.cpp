#include "Monster.h"
#include "Player.h"
#include <iostream>

int main(){
    std::cout<< "program kører"<<std::endl;
    Monster z("zombie", 10, 2);
    Player jens("Jens");
    jens.addMonster(z);
    jens.checkMonsters();
    std::cout<< "Program slut"<<std::endl;
}