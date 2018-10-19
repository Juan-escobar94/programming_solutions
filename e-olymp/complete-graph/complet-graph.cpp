#include <bits/stdc++.h>

using namespace std;

array<bitset<101>, 101> tb;



int main () {
  int a, b, c, d, maxi = 0;
  
  scanf("%d %d", &a, &b);
  if (b  < (a - 1)) {
    printf("NO\n");
    return 0;
  }
  
  for (int i = 0; i < b; i++) {
    scanf("%d %d", &c, &d);
    tb[c].set(d);
    tb[d].set(c);
    tb[c].set(c);
    tb[d].set(d);

    maxi = max(maxi, max(c,d));
  }
  
  
  for (int i = 1; i <= maxi; i++) {
    for (int j = 1; j <= maxi; j++)
      if (!tb[i][j]) {
	printf("NO\n");
	return 0;
      }
  }

  printf("YES\n");
  return 0;
}
