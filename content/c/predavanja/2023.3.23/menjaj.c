#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menjaj(int *a, int *b){ // z zvedico smo naredil, da je to naslov celega števila in ne dejanska vrednost spremenljivke

    int pom = *a;
    *a = *b;
    *b = pom;

}

int main (void){

    int x = 3, y = 14;
    menjaj(&x, &y);
    printf("%d %d \n", x, y);

return 0;
}