#include "Human.h"
#include <iostream>
#include <memory>
using namespace std;

Move* Human::makeMove() {
    string moveChoice;
    cout << "Enter Move (Monkey, Robot, Pirate, Ninja, Zombie): ";
    cin >> moveChoice;

    if (moveChoice == "Monkey") {
        return new Monkey();
    } else if (moveChoice == "Robot") {
        return new Robot();
    } else if (moveChoice == "Pirate") {
        return new Pirate();
    } else if (moveChoice == "Ninja") {
        return new Ninja();
    } else if (moveChoice == "Zombie") {
        return new Zombie();
    }
    return nullptr;
}

string Human::getName() {
    return "Human";
}
