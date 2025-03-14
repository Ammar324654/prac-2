#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move {
public:
    string getName() override { return "Robot"; }
    bool beats(Move* other) override {
        return other->getName() == "Ninja" || other->getName() == "Zombie";
    }
};

#endif // ROBOT_H
