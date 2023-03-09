// write a program that transforms small letters to big letters in ascii

#include <stdio.h>

int main(void) {
    char znak;

    while (1){
        scanf("%c", &znak);
        if (znak == '/n'){
            break;
        }
       znak = toupper(znak);
        printf("%c", znak);
    }
}