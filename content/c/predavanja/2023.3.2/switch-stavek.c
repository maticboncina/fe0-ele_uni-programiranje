#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int ocena = 9;

switch (ocena){

    case 10: printf("odlicno"); break;
    case 9:
    case 8: printf("prav"); break;
    case 7: printf("dobro"); break;
    case 6: printf("zadostno"); break;
    default: printf("ne zadostno"); break;

}

return 0;
}