#include <stdio.h>


int main () {
    int mb, months, a;
    int left = 0;

    scanf("%d", &mb);
    scanf("%d", &months);

    while (months--) {
        scanf("%d", &a);
        left += (mb - a);
    }
    printf("%d\n", (left+mb));

    return 0;
}
