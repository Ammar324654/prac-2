#include <iostream>
#include "Human.h"
#include "Referee.h"

using namespace std;

int main() {
    Referee referee;
    Human player1, player2;
    
    Player* winner = referee.refGame(&player1, &player2);
    
    if (winner) {
        cout << winner->getName() << " wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
    
    return 0;
}
