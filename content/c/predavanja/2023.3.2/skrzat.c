#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int stevec = 1;
    for (int i = 3, korak = 3; i % 13; i += korak, stevec++) {}

    printf("%d", stevec);

return 0;
}
