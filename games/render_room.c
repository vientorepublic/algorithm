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

void renderRoom(int playerPos) {
    printf("\n");
    
    // Top border
    for (int i = 0; i < ROOM_WIDTH + 2; i++) {
        printf("*");
    }
    printf("\n");
    
    // Middle section
    printf("*");
    for (int i = 0; i < ROOM_WIDTH; i++) {
        if (i == playerPos) {
            printf("P");
        } else if (i < playerPos) {
            printf(".");
        } else {
            printf(" ");
        }
    }
    printf("*\n");
    
    // Bottom border
    for (int i = 0; i < ROOM_WIDTH + 2; i++) {
        printf("*");
    }
    printf("\n\n");
}

int main(int argc, char* argv[]) {
    int playerPosition = 0;
    char input[10];

    while (1) {
        system(CLEAR_CONSOLE);
        renderRoom(playerPosition);
        printf("Enter command (l for left, r for right, q to quit): ");
        fgets(input, sizeof(input), stdin);

        if (input[0] == 'q') {
            break;
        } else if (input[0] == 'l' && playerPosition > 0) {
            playerPosition--;
        } else if (input[0] == 'r' && playerPosition < ROOM_WIDTH - 1) {
            playerPosition++;
        }
    }
    return 0;
}
