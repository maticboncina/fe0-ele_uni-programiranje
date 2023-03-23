#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *maks(double t[]){
    double *m = t;
    for (int i = 0; t[i] >= 0; i++){

        if (t[i] > *m){
            m = &t[i];
        }
    }
}

int main (void){

    double tab[] = {2, 4, 12, 4, 6, -1};
    printf("%f", *maks(tab));

return 0;
}