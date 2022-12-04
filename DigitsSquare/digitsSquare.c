#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "clearScreen.h"
// gcc digitsSquare.c -o digitsSquare.exe


int main() {
    srand(time(NULL));
    puts("\x1b[?25l"); // Hide cursor

    while (1) {
        clearScreen();
        for (int i=0; i<10; i++) {
            for (int j=0; j<25; j++) {
                int r = rand() % 10;
                printf("%d", r);
            }
            puts("");
        }
        Sleep(300);
    }
}