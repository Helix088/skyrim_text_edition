#pragma once
#ifndef player_h
#define player_h
#include "inventory.h"
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Player {
private:
    Inventory inventory;
    string playerName;
    string playerGender;
    string playerRace;
    int playerAge;
    int playerGold;
    shared_ptr<Inventory> inv;
public:
    Player();
    Player(string playerName, string playerGender, string playerRace, int playerAge, shared_ptr<Inventory> inv);
    void menu();
    void add_player();
    void display_info();
    void display_player_inventory();
    shared_ptr<Inventory> add_inventory();
    string get_name() const;
    string get_race() const;
    int get_age() const;
    int add_gold() const;
    int subtract_gold() const;
    int get_gold() const;
};

#endif  // player_h