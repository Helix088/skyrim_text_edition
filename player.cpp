#include "player.h"
#include <Windows.h>
#include "mmsystem.h"
#include <stdlib.h>
#include <string>
#include <list>
#include <iostream>
using namespace std;

Player::Player() {
    // Constructor implementation
    playerName = "";
    playerGender = "";
    playerRace = "";
    playerAge = 0;
    playerGold = 0;
    inv = nullptr;
}

Player::Player(string playerName, string playerGender, string playerRace, int playerAge, shared_ptr<Inventory> inv) {
    this->playerName = playerName;
    this->playerAge = playerAge;
    this->playerRace = playerRace;
    this->inv = inv;
}

void Player::menu() {

}

void Player::add_player()
{
    cout << "Enter the fields below to get started: " << endl;
    Sleep(1000);
    cout << "What is your character's name: " << endl;
    getline(cin.ignore(), playerName);
    cout << "Are you a male or female: " << endl;
    cin >> playerGender;
    cin.ignore();
    cout << "What is your character's race you can choose: " << endl;
    cout << "(Wood Elf, High Elf, Dark Elf, Orc, Redguard, Breton, Nord, Imperial, Khajiit, or Argonian)" << endl;
    cin >> playerRace;
    cin.ignore();
    cout << "What is your character's age: " << endl;
    cin >> playerAge;
    cin.ignore();
    cout << endl;
    add_inventory();
}

void Player::display_info() {
    cout << "Name: " << playerName << endl;
    cout << "Gender: " << playerGender << endl;
    cout << "Race: " << playerRace << endl;
    cout << "Age: " << playerAge << endl;
    inv->display_inventory();
    cout << endl;
}

void Player::display_player_inventory() {
    cout << "Name: " << playerName << endl;
    cout << "Gold: " << playerGold << endl;
    inv->display_inventory();
}

shared_ptr<Inventory> Player::add_inventory() {
    inv = make_shared<Inventory>();
    inv->get_inventory();
    return inv;
}


string Player::get_name() const {
    return playerName;
}

string Player::get_race() const {
    return playerRace;
}

int Player::get_age() const
{
    return playerAge;
}

int Player::add_gold() const
{
    return 0;
}

int Player::subtract_gold() const
{
    return 0;
}

int Player::get_gold() const {
    return playerGold;
}