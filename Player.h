#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player {
public:
    virtual Move* makeMove() = 0;  // Returns a Move object
    virtual string getName() = 0;  // Returns the player's name
    virtual ~Player() {}           // Virtual destructor
};

#endif 
