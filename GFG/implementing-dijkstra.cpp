#include<bits/stdc++.h>

using namespace std;

vector<int> dijkstra(int n, vector<vector<int>> adj[], int s)
{
    vector<int> d(n, 1e7);
    d[s]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, s});
    
    while(!pq.empty()) {
      int node = pq.top().second;
      int currD= pq.top().first;
      pq.pop();
      
      if(d[node]<currD) continue;
      
      for(auto p : adj[node]) {
          int v = p[0];
          int w = p[1];
          if(w+currD<d[v]) {
              d[v]=w+currD;
              pq.push({d[v], v});
          }
      }
  }
  return d;
}

int main() {
  int n,e;
  cin >> n >> e;
  vector<vector<int>> adj[n];
  while(e--) {
    int u,v,w;
    cin >> u >> v >> w;
    vector<int> t1,t2;
    t1.push_back(v);
    t1.push_back(w);
    adj[u].push_back(t1);
    t2.push_back(u);
    t2.push_back(w);
    adj[v].push_back(t2);
  }
  int s;
  cin >> s;
  vector<int> res = dijkstra(n, adj, s);
  for(int i=0; i<n; i++) cout << res[i] << " ";
  cout << endl;
  return 0;
}
