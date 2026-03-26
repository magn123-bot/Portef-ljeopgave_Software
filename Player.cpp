#include "Player.h"
#include <iostream>
#include "Monster.h"
#include <vector>
#include <iostream>

Player::Player(std::string name){

}
void Player::checkMonsters(){
    for (Monster i : monsters){
        std::cout<< i.getName()<< std::endl;
    }
}

void Player::removeMonster(const Monster& m){
    for (int i{}; i < monsters.size(); i++){
        if (monsters[i].getName() == m.getName()){
            monsters.erase(monsters.begin() + i);
            break;
        }
    }

}

void Player::addMonster(Monster m){
    if (monsters.size() < 4){
        monsters.push_back(m);
    } 
    std::cout<< "Choose a monster to remove: " << std::endl;
    Monster& m = chooseMonster();
    removeMonster(m);
    monsters.push_back(m);

}

Monster& Player::chooseMonster(){
    checkMonsters();
    while (true) {
    std::cout<< "Choose a monster: "<< std::endl;
    std::string choice;
    std::cin>> choice;
 
    for (int i{}; i < monsters.size(); i++){
        if (choice == monsters[i].getName()) {
            return monsters[i];
        } 
    }
    std::cout<< " Invalid choice, try again " << std::endl;
    }
}

Monster& Player::randomMonster(){
    srand(time(0));
    int index = rand() % aliveMonsters.size();
    
    return  *aliveMonsters[index];

}

    std::vector<Monster*> Player::aliveAllyMonsters(){
        for (auto& m : monsters){
        if (m.isAlive()){
            aliveMonsters.push_back(&m);
        }}
        return aliveMonsters;

    }

    void Player::removeDeadMonsters(){
        if (monsters.size() != aliveMonsters.size()){
            for (int i{}; i < monsters.size(); i++){
                    if (!monsters[i].isAlive()) {
                        monsters.erase(monsters.begin() + i);
                    } 
                }
        }
        std::cout<<"No dead monsters"<<std::endl;
    }