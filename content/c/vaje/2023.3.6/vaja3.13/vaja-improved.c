#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerMove(int n, int mode) {
    if (mode == 1) {
        return rand() % 3 + 1; // Easy: naključno število žetonov
    } else if (mode == 2) {
        if (n % 4 == 0) {
            return rand() % 2 + 1; // Medium: naredi napako naključno enkrat na vsakih 5 potez
        } else {
            return (n - 1) % 4;
        }
    } else {
        return (n - 1) % 4; // Hard: ne naredi napake
    }
}

int main() {
    int n, move, player, mode;
    srand(time(NULL));
    printf("Vnesi začetno stevilo zetonov: ");
    scanf("%d", &n);
    printf("Kdo gre prvi? (0: clovek, 1: racunalnik): ");
    scanf("%d", &player);
    printf("Izberi nacin igre (1: Easyt, 2: Medium, 3: Hard): ");
    scanf("%d", &mode);

    while (n > 0) {
        if (player == 0) {
            printf("Trenutno stevil ozetonov v kupcku: %d. Koliko jih vzames (1-3): ", n);
            scanf("%d", &move);
            while (move < 1 || move > 3 || move > n) {
                printf("Ne veljavna poteza. Izberi ponovno: ");
                scanf("%d", &move);
            }
        } else {
            move = getComputerMove(n, mode);
            printf("Racunalnik vzame %d kovancev.\n", move);
        }
        n -= move;
        player = 1 - player;
    }

    if (player == 0) {
        printf("Izgubil si!\n");
    } else {
        printf("Racunalnik je izgubil!\n");
    }

    return 0;
}
