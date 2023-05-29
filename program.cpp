// program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "game.h"
#include "player.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
    Player player;
    Game game(player);
    game.title_screen();
    HANDLE hstdin;
    DWORD mode;

    hstdin = GetStdHandle(STD_INPUT_HANDLE);
    GetConsoleMode(hstdin, &mode);
    SetConsoleMode(hstdin, ENABLE_ECHO_INPUT | ENABLE_PROCESSED_INPUT);

    cout << setw(480) << "Press 'Enter' to start a new game..." << flush;

    // Check for Enter key press
    while (!(GetAsyncKeyState(VK_RETURN) & 0x8000)) {
    }

    system("CLS");
    PlaySound(NULL, NULL, 0);
    game.loading_screen();
    game.intro();
    game.start();
    game.play();

    bool escapePressed = false;
    bool shiftPressed = false;
    bool upPressed = false;
    bool downPressed = false;
    bool leftPressed = false;
    bool rightPressed = false;
    bool mouseButtonPressedL = false;
    bool mouseButtonPressedR = false;
    bool spacePressed = false;

    while (!escapePressed) {
        if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {
            if (!shiftPressed) {
                shiftPressed = true;
                game.menu();
                Sleep(200);
            }
        }
        else {
            shiftPressed = false;
        }

        if (GetAsyncKeyState(VK_UP) & 0x8000) {
            if (!upPressed) {
                upPressed = true;
                game.walk_forward();
                Sleep(200);
            }
        }
        else {
            upPressed = false;
        }

        if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            if (!downPressed) {
                downPressed = true;
                game.walk_backward();
                Sleep(200);
            }
        }
        else {
            downPressed = false;
        }

        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            if (!leftPressed) {
                leftPressed = true;
                game.walk_left();
                Sleep(200);
            }
        }
        else {
            leftPressed = false;
        }

        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            if (!rightPressed) {
                rightPressed = true;
                game.walk_right();
                Sleep(200);
            }
        }
        else {
            rightPressed = false;
        }

        if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {
            if (!mouseButtonPressedL) {
                mouseButtonPressedL = true;
                game.swing();
                Sleep(200);
            }
        }
        else {
            mouseButtonPressedL = false;
        }

        if (GetAsyncKeyState(VK_RBUTTON) & 0x8000) {
            if (!mouseButtonPressedR) {
                mouseButtonPressedR = true;
                game.block();
                Sleep(200);
            }
        }
        else {
            mouseButtonPressedR = false;
        }

        if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
            if (!spacePressed) {
                spacePressed = true;
                game.jump();
                Sleep(200);
            }
        }
        else {
            spacePressed = false;
        }

        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
            escapePressed = true;
        }
    }

    FlushConsoleInputBuffer(hstdin);

    SetConsoleMode(hstdin, mode);
    return 0;
}