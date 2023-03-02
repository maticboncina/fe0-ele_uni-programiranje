#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++){

            if (j < i) continue; // če bi želeli nad diagonalo, damo continue, zato da nadaljujemo na načim, da nadaljuje na preverjanje pogoha
            printf("%4d", i * j);
        }
        printf("\n");
    }

return 0;
}

/*

   1
   2   4
   3   6   9
   4   8  12  16
   5  10  15  20  25
   6  12  18  24  30  36
   7  14  21  28  35  42  49
   8  16  24  32  40  48  56  64
   9  18  27  36  45  54  63  72  81
  10  20  30  40  50  60  70  80  90 100

*/

/*
if (j < i) continue;
   1   2   3   4   5   6   7   8   9  10
   4   6   8  10  12  14  16  18  20
   9  12  15  18  21  24  27  30
  16  20  24  28  32  36  40
  25  30  35  40  45  50
  36  42  48  54  60
  49  56  63  70
  64  72  80
  81  90
 100

*/