#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"

class Human : public Player {
public:
    Move* makeMove() override;
    string getName() override;
};

#endif
