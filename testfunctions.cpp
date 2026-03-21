#include "Monster.h"
#include "Player.h"
#include <iostream>

int main(){
    Monster z("zombie", 10, 2);
    Player jens("Jens");
    jens.addMonster(z);
    jens.checkMonsters();
}