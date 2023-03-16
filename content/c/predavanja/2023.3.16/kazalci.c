#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){

    float x = 3.1416;
    float *k; // zvezdica paše k floatu --> kazalčni tip

    k = &x;

    printf("%f %p\n", x, &x);

    return 0;
}