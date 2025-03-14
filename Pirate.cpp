#include "Pirate.h"
#include "Robot.h"
#include "Monkey.h"

// Pirate beats Robot and Monkey
bool Pirate::beats(Move* other) {
    if (dynamic_cast<Robot*>(other)) {
        return true;  // Pirate drowns Robot
    } else if (dynamic_cast<Monkey*>(other)) {
        return true;  // Pirate skewers Monkey
    }
    return false;
}
