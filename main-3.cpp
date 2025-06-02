#include <ctime>
#include <iostream>
#include "Game.h"

int main() {
    srand(time(nullptr));
    Game game;
    game.initGame(2, 2, 10, 10);
    game.gameLoop(3, 3.0);
    return 0;
}
