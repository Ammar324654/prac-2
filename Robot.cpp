#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"

// Robot beats Ninja and Zombie
bool Robot::beats(Move* other) {
    if (dynamic_cast<Ninja*>(other)) {
        return true;  // Robot chokes Ninja
    } else if (dynamic_cast<Zombie*>(other)) {
        return true;  // Robot crushes Zombie
    }
    return false;
}
