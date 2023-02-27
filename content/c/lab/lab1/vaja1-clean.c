// Program that reads from the input how many days are in a month and which day of the week it starts on (one for Monday, two for Tuesday ... seven for Sunday). The program should then print out the calendar for the given month

#include <stdio.h>

int main(void){
    int days, start, i, j, k;

    // definamo spremenljivke, ki jih uporabimo za shranjevanje user inputa )če bi želeli bi lahko tudi uporabili %i namesto %d, ampak je %d boljša praksa, saj je %i le integer %d pa za vsa decimalna številacd )

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &start);

    // printamo header koledarja

    printf("  P  T  S  C  P  S  N\n");

    // Z zanko izpišemo presledke za poravnavo v prvem tednu meseca

    for(i = 1; i < start; i++){
        printf("   ");
    }

    // izpisujemo dneve v mesecu. POZOR: Uporabimo %3d za pravilno poravnavo koledarja, v kolikor je dolžina "dneva" manj kot 3 znake
    // Stavek if pa preveri, ali je trenutni dan sedmi dan od začetnega dne v tednu (ali večkratnik sedem), in če da izpiše \n za nove vrstice, če je dolžina več kot en teden, zato da je formatiranje pravilno 

    for(j = 1; j <= days; j++){
        printf("%3d", j);
        if((i + j - 1) % 7 == 0){
            printf("\n");
        }
    }

    // zakljućimo program

    return 0;
}