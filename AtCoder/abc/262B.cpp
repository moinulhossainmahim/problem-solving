#include <bits/stdc++.h>

using namespace std;

const int mx = 112;
bool adj[mx][mx];

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u][v] = adj[v][u] = true;
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      for (int k = j + 1; k <= n; k++) {
        if (adj[i][j] && adj[j][k] && adj[k][i]) {
          ans++;
        }
      }
    }
  }
  cout << ans << '\n';
}
