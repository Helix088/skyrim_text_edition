#include "game.h"
#include <Windows.h>
#include "mmsystem.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

Game::Game() {
    // Constructor implementation
}

void Game::title_screen() {
    cout << setw(90) << "This contains sound, please adjust your headset accordingly" << endl;
    Sleep(3000);
    system("CLS");
    PlaySound(TEXT("8-bit-skyrim.wav"), NULL, SND_ASYNC | SND_LOOP);
    cout << setw(72) << "Bethesda Softworks" << endl;
    Sleep(3500);
    system("CLS");
    cout << setw(76) << "The Elder Scrolls V: Skyrim" << endl;
    Sleep(3500);
    cout << setw(67) << "Text Edition" << endl;
    Sleep(3500);
    cout << setw(74) << "Music By: Joe Jeremiah" << endl;
}

void Game::loading_screen() {
    cout << setw(100) << "Helpful Tip: Did you know that if you need to breath, you should inhale." << endl;
    cout << setw(67) << "Loading..." << endl;
    Sleep(5000);
    system("CLS");
}

void Game::intro() {
    cout << setw(72) << "Bethesda Softworks" << endl;
    Sleep(3500);
    system("CLS");
    cout << setw(73) << "The Elder Scrolls V" << endl;
    Sleep(3500);
    system("CLS");
    cout << setw(74) << "Skyrim: Text Edition" << endl;
    Sleep(3500);
    system("CLS");
}

void Game::start() {
    // Game starting point
    dialouge.opening_scene();
    HANDLE hstdin;
    DWORD mode;

    hstdin = GetStdHandle(STD_INPUT_HANDLE);
    GetConsoleMode(hstdin, &mode);
    SetConsoleMode(hstdin, ENABLE_ECHO_INPUT | ENABLE_PROCESSED_INPUT);

    cout << "Once you press 'Enter' the dialouge will disappear." << endl;
    cout << "Press 'Enter' to continue..." << endl;

    // Check for Enter key press
    while (!(GetAsyncKeyState(VK_RETURN) & 0x8000)) {
    }
    system("CLS");
    player.add_player();
    player.display_info();
}

void Game::play() {
    cout << "What would you like to do?" << endl;
    cout << "Press the UP ARROW key to walk." << endl;
    cout << "Press the DOWN ARROW key to walk." << endl;
    cout << "Press the LEFT ARROW key to walk." << endl;
    cout << "Press the RIGHT ARROW key to walk." << endl;
    cout << "Press the SPACEBAR to jump." << endl;
    cout << "Press the LEFT MOUSE button to swing your weapon." << endl;
    cout << "Press the RIGHT MOUSE button to block with your weapon." << endl;
    cout << "Press the SHIFT key to open your inventory." << endl;
    cout << "Press the ESC key to leave the game." << endl;
    cout << endl;
}

void Game::menu() {
    char choice;
    cout << "Menu:" << endl;
    cout << "0. Resume" << endl;
    cout << "1. Inventory" << endl;
    cout << "2. Controls" << endl;
    do {
        cin >> choice;
        cout << endl;
        if (choice == '1') {
            player.display_player_inventory();
        }
        else if (choice == '2') {
            play();
        }
    } while (choice != '0');
}

void Game::walk_forward() {
    cout << "You walk fowards." << endl;
    cout << endl;
}

void Game::walk_backward() {
    cout << "You walk backwards." << endl;
    cout << endl;
}

void Game::walk_left() {
    cout << "You walk left." << endl;
    cout << endl;
}

void Game::walk_right() {
    cout << "You walk right." << endl;
    cout << endl;
}

void Game::swing() {
    cout << "You swing your weapon!" << endl;
    cout << endl;
}

void Game::block() {
    cout << "You block with your weapon!" << endl;
    cout << endl;
}

void Game::jump() {
    cout << "You jump!" << endl;
    cout << endl;
}