#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int vsota = 0;
int vnos;
do{
    printf("Vnesi stevilo: ");
    scanf("%d", &vnos);
    vsota += vnos;
} 

while (vnos != 0);{
    printf("Skupaj %d zabojev", vsota);
}


return 0;
}