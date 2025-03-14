#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    Human human(name);
    Computer computer;
    Referee referee;

    Player* winner = referee.refGame(&human, &computer);

    if (winner == nullptr) {
        cout << "It's a Tie" << endl;
    } else {
        cout << winner->getName() << " Wins" << endl;
    }

    return 0;
}
