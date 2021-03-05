#include <stdio.h>

#define abs(a) a > 0 ? a : -a

int main () {

    unsigned long a, b;
    long ans;
    while(scanf("%ld %ld", &a, &b) != EOF) {
      ans = a-b;
      printf("%ld\n", abs(ans));
    }
    return 0;
}
