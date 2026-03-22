#include "Monster.h"
#include "Player.h"
#include <iostream>

int main(){
    std::cout<< "program kører"<<std::endl;
    Monster z("zombie", 10, 2);
    Monster h("Horse", 5, 1);
    Player jens("Jens");
    jens.addMonster(z);
    jens.addMonster(h);
    h.attack(z);
    z.getStatus();
    jens.checkMonsters();

    std::cout<< "Program slut"<<std::endl;
}