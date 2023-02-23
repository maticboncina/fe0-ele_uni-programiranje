// Program that reads from the input how many days are in a month and which day of the week it starts on (one for Monday, two for Tuesday ... seven for Sunday). The program should then print out the calendar for the given month

#include <stdio.h>

int main(void){
    int days, start, i, j, k;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &start);

    printf("  P  T  S  C  P  S  N\n");
    for(i = 1; i < start; i++){
        printf("   ");
    }

    for(j = 1; j <= days; j++){
        printf("%3d", j);
        if((i + j - 1) % 7 == 0){
            printf("\n");
        }
    }

    return 0;
}