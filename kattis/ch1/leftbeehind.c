#include <stdio.h>


int main() {
  int a,b;
  while(scanf("%d %d", &a, &b)){
    if (!a && !b) break;
    if(a+b == 13) {
      puts("Never speak again.");
    } else if(a > b) {
      puts("To the convention.");
    } else if(a < b) {
      puts("Left beehind.");
    } else {
      puts("Undecided.");
    }
  }

  return 0;
}
