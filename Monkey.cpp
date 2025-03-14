#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"

// Monkey beats Ninja and Robot
bool Monkey::beats(Move* other) {
    if (dynamic_cast<Ninja*>(other)) {
        return true;  // Monkey fools Ninja
    } else if (dynamic_cast<Robot*>(other)) {
        return true;  // Monkey unplugs Robot
    }
    return false;
}
