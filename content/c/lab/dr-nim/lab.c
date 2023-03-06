#include <stdio.h>

int main() {
    int marbles;
    int player = 1;  // 1 for player, 2 for computer

    printf("Welcome to Dr. Nim game!\n");
    printf("How many marbles do you want to start with? ");
    scanf("%d", &marbles);
    while (marbles <= 0) {
        printf("Invalid number of marbles. Please enter a positive integer: ");
        scanf("%d", &marbles);
    }

    printf("There are %d marbles on the table.\n", marbles);

    while (marbles > 0) {
        int move;
        if (player == 1) {
            printf("Your turn. How many marbles do you want to take (1-3)? ");
            scanf("%d", &move);
            while (move < 1 || move > 3 || move > marbles) {
                if (marbles >= 3) {
                    printf("Invalid move. Please enter a number between 1 and 3: ");
                } else if (marbles == 2) {
                    printf("Invalid move. Please take 1 or 2 marbles: ");
                } else if (marbles == 1) {
                    printf("Invalid move. You may only take one marble :)\n");
                }
                scanf("%d", &move);
            }
        } else {
            move = (marbles - 1) % 4;
            if (move == 0) {
                move = 1;
            }
            printf("Computer takes %d marbles.\n", move);
        }

        marbles -= move;
        printf("There are %d marbles on the table.\n", marbles);

        if (marbles == 0) {
            if (player == 1) {
                printf("Computer wins!\n");
            } else {
                printf("You win!\n");
            }
        } else {
            player = 3 - player;  // switch player
        }
    }

    return 0;
}
