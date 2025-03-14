#ifndef MOVE_H
#define MOVE_H

#include <string>
using namespace std;

class Move {
public:
    virtual string getName() = 0;   // Pure virtual function to get move name
    virtual bool beats(Move* other) = 0;  // Determines if the move beats another move
    virtual ~Move() {}   // Virtual destructor for proper cleanup
};

#endif // MOVE_H
