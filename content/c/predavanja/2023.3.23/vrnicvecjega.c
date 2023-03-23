#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menjaj(int *a, int *b){ // z zvedico smo naredil, da je to naslov celega števila in ne dejanska vrednost spremenljivke

    int pom = *a;
    *a = *b;
    *b = pom;

}

int *maks(int *a, int *b){

    return a > b ? &a : &b;

}

int main (void){

    int x = 12, y = 88;
    printf("%d", *maks(x, y));

return 0;
}