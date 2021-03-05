#include <stdio.h>

int main() {

    char buf[51];

    fgets(buf, sizeof(buf), stdin);
    for (int i = 0; i < 51; i++) if(buf[i] == '\n') buf[i] = '\0';
    printf("Thank you, %s, and farewell!", buf);

    return 0;
}
