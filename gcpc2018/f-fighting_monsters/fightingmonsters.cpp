#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

int main() {
  int n, m;
  vii monsters;
  int fib_numbers[32];
  scanf("%d", &n);
  int i = 0;
  while (n--) {
    scanf("%d", &m);
    monsters.push_back({m, i});
    i++;
  }

  sort(monsters.begin(), monsters.end(), [](ii a, ii b)  {
      return a.first < b.first;
    });

  fib_numbers[0] = 1;
  fib_numbers[1] = 1;
  for (int j = 0; j < 30; j++){
    fib_numbers[j+2] = fib_numbers[j] + fib_numbers[j+1];
  }
  int a = -1;
  int b = -1;
  // look at the next fibo
  for(int k = 0; k < monsters.size(); k++){
    int* p = lower_bound(fib_numbers, fib_numbers + 32, monsters[k].first);
    if(p!=(fib_numbers+32) && !(monsters[k].first < *p)) {
      int ind = p - fib_numbers; 
      ii pseudomonster {fib_numbers[ind+1], -1};
      auto g = lower_bound(monsters.begin(), monsters.end(), pseudomonster, [](ii a, ii b) {
	  return a.first < b.first;
	});
      if((g!=(monsters.end()) && !(pseudomonster.first < g->first)) && (monsters[k].second != g->second)){
	a = monsters[k].second;
	b = g->second;
	break;
      }
    }
  }

  if (a != -1 && b != -1) {
    printf("%d %d\n", a+1, b+1);
  } else {
    printf("impossible\n");
  }
   
  return 0;
}
