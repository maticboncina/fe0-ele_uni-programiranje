// Write a function that calculates the value of the square root using Newton's method of non-negative number d. Test the function for integers between 0 and 10000. 

#include <stdio.h>
#include <math.h>

double square_root(double d);

int main() {
    double d;
    printf("Vnesi stevilko, ki je po moznosti nenegativna: ");
    scanf("%lf", &d);
    double root = square_root(d);
    printf("Evo kle mas aproksimacijo korena: %f\n", d, root);
    return 0;
}

double square_root(double d) {
    if (d < 0) {
        printf("Hold your horses! To je negativno število! Reku sm ti da ne deli tega! Poskusi ponovno!\n");
        return 0;
    }
    double x = 1;
    double y = (x + d / x) / 2;
    while (fabs(y - x) > 0.000001) {
        x = y;
        y = (x + d / x) / 2;
    }
    return y;
}