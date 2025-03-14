#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->getName() == move2->getName()) {
        return nullptr; // tie
    }

    if (move1->beats(move2)) {
        return player1;  // Player 1 wins
    } else {
        return player2;  // Player 2 wins
    }
}
