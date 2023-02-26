#include <stdio.h>

int main(void) {
    int days, start, i, j;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &start);

    printf("P  T  S  C  P  S  N\n");
    for(i = 1; i < start; i++) {
        printf("   ");
    }
    for(j = 1; j <= days; j++) {
        printf("%d ", j);
        if((i + j - 1) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}

// tole nima vredu formattinga

/* 
P  T  S  C  P  S  N
1 2 3 4 5 6 7 
8 9 10 11 12 13 14 
15 16 17 18 19 20 21 
22 23 24 25 26 27 28 
29 30 
*/
