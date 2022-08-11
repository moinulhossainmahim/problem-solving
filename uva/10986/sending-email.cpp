/*---- IN THE NAME OF ALLAH ----*/
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

#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 1000000000000000000;
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

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

int dx[] = {0, 0, +1, -1, -1 + 1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};

const int mx = 1e6;
vii adj[mx];
ll dist[mx];

void dijkstra(int s, int n) {
  for (int i = 0; i <= n; i++)
    dist[i] = infLL;
  priority_queue<pll, vll, greater<pll>> pq;
  dist[s] = 0;
  pq.push({0, s});

  while (!pq.empty()) {
    int u = pq.top().S;
    ll currD = pq.top().F;
    pq.pop();

    if (currD > dist[u])
      continue;

    for (auto a : adj[u]) {
      int v = a.F;
      int w = a.S;
      if (currD + w < dist[v]) {
        dist[v] = currD + w;
        pq.push({dist[v], v});
      }
    }
  }
}

int main() {
  optimize();
  int t;
  cin >> t;
  for (int tc = 1; tc <= t; tc++) {
    for (int i = 0; i <= 1e6; i++)
      adj[i].clear();
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    for (int i = 1; i <= m; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      adj[u].PB({v, w});
      adj[v].PB({u, w});
    }

    dijkstra(s, n);

    ll ans = dist[t];

    if (ans == infLL)
      cout << "Case #" << tc << ": unreachable" << endl;
    else
      cout << "Case #" << tc << ": " << ans << endl;
  }
}
