#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

#define optimize()                                                             \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define fraction()                                                             \
  cout.unsetf(ios::floatfield);                                                \
  cout.precision(10);                                                          \
  cout.setf(ios::fixed, ios::floatfield);
#define file()                                                                 \
  freopen("input.txt", "r", stdin);                                            \
  freopen("output.txt", "w", stdout);

const int mx = 1e7 + 123;
vii adj[mx];
ll dis[mx];
int parent[mx];

void dijkstra(int s, int n) {
  for (int i = 0; i <= n; i++)
    dis[i] = infLL;
  dis[s] = 0;
  priority_queue<pll, vll, greater<pll>> pq;
  pq.push({0, s});
  while (!pq.empty()) {
    ll node = pq.top().S;
    ll currD = pq.top().F;
    pq.pop();

    if (dis[node] < currD)
      continue;

    for (auto p : adj[node]) {
      int v = p.F;
      int w = p.S;
      if (currD + w < dis[v]) {
        dis[v] = currD + w;
        pq.push({dis[v], v});
        parent[v] = node;
      }
    }
  }
}

int main() {
  optimize();
  int s, t;
  cin >> s >> t;
  for (int i = 1; i <= t; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    adj[u].PB({v, w});
    adj[v].PB({u, w});
  }

  dijkstra(1, s);

  if (dis[s] == infLL)
    return cout << "-1", 0;

  int u = s;
  vi ans = {u};
  while (parent[u] != 0) {
    ans.PB(parent[u]);
    u = parent[u];
  }

  reverse(all(ans));
  for (auto u : ans)
    cout << u << " ";
  cout << endl;
}

/*

  3 3
  1 2 1
  3 1 2
  2 3 1

  // ans 1 3

  10 10
  1 5 12
  2 4 140
  2 10 149
  3 6 154
  3 7 9
  3 8 226
  3 10 132
  4 10 55
  5 8 33
  7 8 173

  // ans 1 5 8 7 3 10

*/
