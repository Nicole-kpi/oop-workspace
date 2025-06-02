#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Game.h"

int main() {

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    Game game;
    game.initGame(2, 2, 10, 10);

    game.gameLoop(5, 3.0);
    return 0;
}

