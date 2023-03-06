// write a program that takes an input of a integer representing euros and returns the smallest number of banknotes and coins that are needed to pay this sum
#include <stdio.h>

int main (void){
    int eur, nom, st;

    printf("Enter the amount of euros: ");
    scanf("%d", &eur);
    printf("Izplacilo:\n----------------\nNominala    St. Enot\n    (EUR)\n ----------------\n");

    nom = 500;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st);   

    nom = 200;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st);  

    nom = 100;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st);  

    nom = 50;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st);  

    nom = 20;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st);  

    nom = 10;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st); 

    nom = 5;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st); 

    nom = 2;
    st = eur / nom;
    eur = eur % nom;
    if (st > 0)
        printf("%8d   %d\n", nom, st); 

    nom = 1;
    if (st > 0)
        printf("%8d   %d\n", nom, st); 

    return 0;
}