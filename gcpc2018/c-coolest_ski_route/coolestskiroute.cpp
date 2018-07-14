#include <bits/stdc++.h>



using namespace std;

int main(){
  int n, m;

  scanf("%d %d", &n, &m);
  
  static int adjMat[1001][1001];
  memset(adjMat, 63, sizeof(adjMat));
  //printf("%d\n", sizeof(adjMat));
  
  int s, t, c;
  
  while(m--){
    scanf("%d %d %d", &s, &t, &c);
    if (adjMat[s-1][t-1] > -c)
      adjMat[s-1][t-1] = -c;
  }
  

  int theMax = 0;

  for (int k = 0; k < n; k++)
    for(int i = 0; i < n; i++)
      for(int j = k; j < n; j++){
	adjMat[i][j] = min(adjMat[i][j], adjMat[i][k] + adjMat[k][j]);
	theMax = min(theMax, adjMat[i][j]);
      }

  printf("%d\n", -theMax);
  
  return 0;
}
