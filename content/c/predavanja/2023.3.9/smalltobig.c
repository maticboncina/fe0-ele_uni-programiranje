// write a program that transforms small letters to big letters in ascii

#include <stdio.h>

int main(void) {
    char znak;

    while (1){
        scanf("%c", &znak);
        if (znak == '/n'){
            break;
        }
        if (znak >= 'a' && znak <= 'z'){
            znak = znak + 'A' - 'a';
        }
        printf("%c", znak);
    }
}