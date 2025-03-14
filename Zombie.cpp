#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"

// Zombie beats Pirate and Monkey
bool Zombie::beats(Move* other) {
    if (dynamic_cast<Pirate*>(other)) {
        return true;  // Zombie eats Pirate
    } else if (dynamic_cast<Monkey*>(other)) {
        return true;  // Zombie savages Monkey
    }
    return false;
}
