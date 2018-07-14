#include <bits/stdc++.h>

#define MAXN 100010

using namespace std;

vector<int> g[MAXN];
vector<int> grev[MAXN];
vector<int> topo_sort;
bool seen[MAXN];
bool seenrev[MAXN];


void dfs(int u){
  seen[u] = true;
  for (int i = 0; i < g[u].size(); ++i){
    int v = g[u][i];
    if(!seen[v]) dfs(v);
  }
  topo_sort.push_back(u);
}

void dfs_2(int u){
  seenrev[u] = true;
  for (int i = 0; i < g[u].size(); ++i){
    int v = g[u][i];
    if(!seenrev[v]) dfs_2(v);
  }
}

int main() {
  int Tc;
  scanf("%d", &Tc);
  while(Tc--) {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i <= n; ++i){
      g[i].clear();
      grev[i].clear();
      seen[i] = false;
      seenrev[i] = false;
    }
    topo_sort.clear();
    for(int i = 0; i <= n; ++i) seen[i] = false;
    for (int i = 0; i < m; ++i) {
      int s, t;
      scanf("%d %d", &s, &t);
      g[s].push_back(t);
      grev[t].push_back(s);
    }
    for(int i = 0; i <= n; ++i) if (!seen[i]) dfs(i);
    reverse(topo_sort.begin(), topo_sort.end());
    int ans = 0;
    for(int i = 0; i < topo_sort.size(); ++i) {
      int v = topo_sort[i];
      if (v == 0) continue;
      if(!seenrev[v]) {
	dfs_2(v);
	ans++;
      }
    }
    printf("%d\n", ans);
  }

  return 0;
}
