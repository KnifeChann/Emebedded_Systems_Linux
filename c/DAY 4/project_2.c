#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    const char *choices[] = {"Snake", "Water", "Gun"};
    int again;

    do {
        int player;
        printf("Choose 0 for Snake, 1 for Water, or 2 for Gun: ");

        if (scanf("%d", &player) != 1 || player < 0 || player > 2) {
            puts("Enter 0, 1, or 2.");
            return 1;
        }

        int computer = rand() % 3;
        printf("Computer chose %s.\n", choices[computer]);

        if (player == computer) {
            puts("Tie");
        } else if ((player == 0 && computer == 1) ||
                   (player == 1 && computer == 2) ||
                   (player == 2 && computer == 0)) {
            puts("Player wins");
        } else {
            puts("Computer wins");
        }

        printf("Play again? YES (0), NO (1): ");
        if (scanf("%d", &again) != 1 || (again != 0 && again != 1)) {
            puts("Enter 0 or 1.");
            return 1;
        }
    } while (again == 0);

    return 0;
}