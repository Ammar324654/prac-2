#include "Human.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Move* Human::makeMove() {
    string moveInput;
    cout << "Enter Move: ";
    cin >> moveInput;

    if (moveInput == "Monkey") return new Monkey();
    if (moveInput == "Robot") return new Robot();
    if (moveInput == "Pirate") return new Pirate();
    if (moveInput == "Ninja") return new Ninja();
    if (moveInput == "Zombie") return new Zombie();

    return nullptr;  
