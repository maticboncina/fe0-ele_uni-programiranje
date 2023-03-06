// write a program that reads a number between 1 and 99 and prints it in words in slovenian

#include <stdio.h>
#include <stdlib.h>

int main() {
    int st;
    system("chcp 650001");
    printf("Vnesi število med 1 in 99: ");
    scanf("%d", &st);

    if (st < 1 || st > 99) {
        printf("Število ni v območju 1 - 99");
        return 1;
    }

    printf("Vpisal/a si število ");

    if (st % 10 != 0) {
        switch (st % 10) {
            case 1: printf("ena"); break;
            case 2: printf("dva"); break;
            case 3: printf("tri"); break;
            case 4: printf("štiri"); break;
            case 5: printf("pet"); break;
            case 6: printf("šest"); break;
            case 7: printf("sedem"); break;
            case 8: printf("osem"); break;
            case 9: printf("devet"); break;
        }

        if (st > 10 && st < 20) {
            if (st != 11) {
                printf("na");
            }

            printf("jst");
        }

        if (st > 20) {
            printf("in");
        }

        if (st == 10 || st >= 20) {
            if (st != 10) {
                switch (st / 10) {
                    case 2: printf("dva"); break;
                    case 3: printf("tri"); break;
                    case 4: printf("štiri"); break;
                    case 5: printf("pet"); break;
                    case 6: printf("šest"); break;
                    case 7: printf("sedem"); break;
                    case 8: printf("osem"); break;
                    case 9: printf("devet"); break;
                }

                if (st / 10 == 2) {
                    printf("jset");
                } 
                else {
                    printf("deset");
                }
            }
        }
    }

    return 0;
}
