#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menjaj(int *a, int *b){ // z zvedico smo naredil, da je to naslov celega števila in ne dejanska vrednost spremenljivke

    int pom = *a;
    *a = *b;
    *b = pom;

}

int main (void){

    double (*potenca) (double, double);
    potenca = pow;
    printf("%f", potenca(2, 5));

return 0;
}