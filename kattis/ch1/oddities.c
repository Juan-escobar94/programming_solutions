#include <stdio.h>

int main() {
    int tc, num;

    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &num);
        printf("%d is %s\n", num, ((num % 2 == 0) ? "even" : "odd" ));
    }
    return 0;
}
