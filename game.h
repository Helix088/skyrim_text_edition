#pragma once
#ifndef game_h
#define game_h

#include "dialouge.h"
#include "player.h"

class Game {
private:
    Dialouge dialouge;
    Player player;
    // Add other member variables as needed

public:
    Game();
    Game(const Player& player) : player(player) {}
    void title_screen();
    void loading_screen();
    void intro();
    void start();
    void play();
    void menu();
    void walk_forward();
    void walk_backward();
    void walk_left();
    void walk_right();
    void swing();
    void block();
    void jump();
};

#endif  // game_h