// write a program that estimates the square root of 2 using Newton's method. 
#include <stdio.h>
#include <math.h>

double square_root(double num);

int main() {
    double root = square_root(2);
    printf("Koreb od 2 je %f\n", root);
    return 0;
}

double square_root(double num) {
    double x = 1; // gremo se igrico ugibanja
    double y = (x + num / x) / 2;
    while (fabs(y - x) > 0.000001) { // in ugibamo dokler ne gre
        x = y;
        y = (x + num / x) / 2;
    }
    return y;
}

