#include <stdlib.h>
#include <stdio.h>

int main(void){
    int y = 10, x = 12;

    y = y + (y = 19);
    printf("%d",y);

    return 0;
}