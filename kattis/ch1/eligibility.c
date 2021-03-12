#include <stdio.h>


int main () {
    int tc, courses, year_a, year_b;
    char name[32];

    scanf("%d", &tc);
    while (tc--){
        scanf("%s %d/%*d/%*d %d/%*d/%*d %d", name, &year_a, &year_b, &courses);
        if (year_a >= 2010 || year_b >= 1991) {
            printf("%s eligible\n", name);
        } else if ( courses > 40) {
            printf("%s ineligible\n", name);
        } else {
            printf("%s coach petitions\n", name);
        }


    }
    return 0;
}
