#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"

// Ninja beats Pirate and Zombie
bool Ninja::beats(Move* other) {
    if (dynamic_cast<Pirate*>(other)) {
        return true;  // Ninja karate chops Pirate
    } else if (dynamic_cast<Zombie*>(other)) {
        return true;  // Ninja decapitates Zombie
    }
    return false;
}
