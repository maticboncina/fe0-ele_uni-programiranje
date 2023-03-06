// write a program that takes coins from a pile. You enter starting number of coins. You can take 1 2 or 3 coins from the pile. Loser is the one who takes the last coin from the pile. Build a program that has 3 difficulties. Easy where it takes coins at random, medium where it makes a mistake randomly on 1 to 5 moves and hard where the program never makes a mistakes.

int main (){
    int n, poteza, st, p;
    system("chcp 65001");
    printf("Vnesi število kovancev: ");
    scanf("%d", &n);
    printf("Kdo bo prvi na potezi (0: človek, 1: računalnik): ");
    scanf("%d", &poteza);

    for(; n> 0; n = n - st) 
    switch(p){
        case 0: 
            printf("Na kupu je %d žetonov. Tvoja poteza: ", n);
            scanf("%d", &st);

        case 1:
        st = (n - 1) % 4;
            if (st == 0) {
                st = 1;
            }
        printf("Računalnik vzame %d žetonov.\n", st);
        p = 0;      
    }

    if (p == 0) {
        printf("Izgubil je računalnik!");
    }
    else {
        printf("Izgubil si!");
    }

    return 0;
}




