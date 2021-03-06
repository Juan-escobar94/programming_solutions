#include <stdio.h>
#include <string.h>

int main() {

    int day;
    char month[4];
    scanf("%s %d", month, &day);
    if ((strcmp("OCT", month) == 0 && day == 31) ||
        (strcmp("DEC", month) == 0 && day == 25)) {
      printf("nope");
    } else {
      printf("yup");
    }
    return 0;
}
