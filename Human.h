#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>

class Human : public Player {
private:
    string name;
public:
    Human(string name = "Human") : name(name) {} 
    Move* makeMove() override;
    string getName() override { return name; }
};

#endif 
