/*
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
#define debug(n) cout << (n) << endl;

const int mx = 2e5 + 10;
vi adj[mx];
bool vis[mx];

void dfs(int u) {
  vis[u] = 1;

  for (auto v : adj[u]) {
    if (!vis[v]) {
      dfs(v);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    stack<pair<int, char>> st;
    int n;
    cin >> n;
    n = 2 * n;
    string s;
    cin >> s;
    for (int i = 1; i <= n; i++)
      adj[i].clear();
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++) {
      char c = s[i];
      if (c == '(') {
        st.push({i + 1, c});
      } else {
        int u, v;
        u = st.top().first;
        v = i + 1;
        adj[u].push_back(v);
        adj[v].push_back(u);
        st.pop();
      }
    }
    for (int i = 0; i < n; i++) {
      if (s[i] == ')' && s[i + 1] == '(') {
        adj[i + 1].push_back(i + 2);
        adj[i + 2].push_back(i + 1);
      }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (vis[i] == 0) {
        dfs(i);
        cnt++;
      }
    }
    cout << cnt << endl;
  }
}
