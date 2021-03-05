#include <stdio.h>

int main () {

    float a, b;
    int tc;
    double accum = 0.0;
    scanf("%d\n", &tc);
    while(tc--) {
        scanf("%f %f", &a, &b);
        accum += (a*b);
    }
    printf("%.3f\n", accum);
    return 0;
}
