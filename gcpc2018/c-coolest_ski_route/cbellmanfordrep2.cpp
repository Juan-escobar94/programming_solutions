#include <bits/stdc++.h>

//with edges representation

using namespace std;


struct E {
  int s, t, c;
};


int main() {
  int m, n;
  scanf("%d %d", &n, &m);
  vector<E> edges;

  vector<int> dist;
  dist.assign(n+1, 100*1001);
  dist[0] = 0;
  int s, t, c;

  for(int i = 0; i < m; ++i) {
    scanf("%d %d %d", &s, &t, &c);
    edges.push_back({s, t, -c});
  }

  for(int i = 1; i < n + 1; ++i)
    edges.push_back({0, 1, 0});

  //bellman ford:
    for(int i = 0; i < dist.size(); ++i){
      for(int j = 0; j < edges.size(); ++j) {
      //relax (source u, target v, weight w);
	int u = edges[j].s;
	int v = edges[j].t;
	int w = edges[j].c;
	printf("%d %d %d\n", u, v, w);
	if(dist[v] > dist[u] + w){
	  dist[v] = dist[u] + w;
	  printf("update %d\n", dist[v]);
	}
      }
   }
  

    auto ret = min_element(dist.begin(), dist.end());
    printf("%d\n", -*ret);

  return 0;
}
