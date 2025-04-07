#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
  #define CLEAR_CONSOLE "cls"
#elif defined(__linux__) || defined(__APPLE__)
  #define CLEAR_CONSOLE "clear"
#else
  #define CLEAR_CONSOLE ""
#endif

#define ROOM_WIDTH 10
#define ROOM_HEIGHT 5

void renderRoom(int playerX, int playerY) {
    printf("\n");
    
    // Top border
    for (int i = 0; i < ROOM_WIDTH + 2; i++) {
        printf("*");
    }
    printf("\n");
    
    // Middle section
    for (int y = 0; y < ROOM_HEIGHT; y++) {
        printf("*");
        for (int x = 0; x < ROOM_WIDTH; x++) {
            if (x == playerX && y == playerY) {
                printf("P");
            } else {
                printf(".");
            }
        }
        printf("*\n");
    }
    
    // Bottom border
    for (int i = 0; i < ROOM_WIDTH + 2; i++) {
        printf("*");
    }
    printf("\n\n");
}

int main(int argc, char* argv[]) {
    int playerX = 0, playerY = 0;
    char input[10];

    while (1) {
        system(CLEAR_CONSOLE);
        renderRoom(playerX, playerY);
        printf("Enter command (w/a/s/d to move, q to quit): ");
        fgets(input, sizeof(input), stdin);

        if (input[0] == 'q') {
            break;
        } else if (input[0] == 'w' && playerY > 0) {
            playerY--;
        } else if (input[0] == 's' && playerY < ROOM_HEIGHT - 1) {
            playerY++;
        } else if (input[0] == 'a' && playerX > 0) {
            playerX--;
        } else if (input[0] == 'd' && playerX < ROOM_WIDTH - 1) {
            playerX++;
        }
    }
    return 0;
}
