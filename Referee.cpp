#include "Referee.h"
#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->beats(move2)) {
        return player1;
    } else if (move2->beats(move1)) {
        return player2;
    }
    return nullptr;  // In case of a tie
}
