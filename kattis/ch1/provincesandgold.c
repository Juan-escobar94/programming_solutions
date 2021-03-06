#include <stdio.h>

/**
 *
 * Province (costs 8, worth 6 victory points)
 * Duchy (costs 5, worth 3 victory points)
 * Estate (costs 2, worth 1 victory point)
 *
 * Gold (costs 6, worth 3 buying power)
 * Silver (costs 3, worth 2 buying power)
 * Copper (costs 0, worth 1 buying power)
 *
 **/

int main() {
    int g, s, c, bp;

    scanf("%d %d %d", &g, &s, &c);

    bp = g * 3 + s * 2 + c * 1;


    if (bp < 2) {
        printf("Copper");
    } else if ( bp < 3 ) {
        printf("Estate or Copper");
    } else if( bp < 5 ) {
        printf("Estate or Silver");
    } else if( bp < 6 ){
        printf("Duchy or Silver");
    } else if(bp < 8) {
        printf("Duchy or Gold");
    } else {
        printf("Province or Gold");
    }


    return 0;
}
