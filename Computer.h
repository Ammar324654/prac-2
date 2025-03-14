#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Robot.h"  // Computer always picks Robot

class Computer : public Player {
public:
    Move* makeMove() override { return new Robot(); }
    string getName() override { return "Computer"; }
};

#endif 
