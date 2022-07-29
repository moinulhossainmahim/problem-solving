/*---- IN THE NAME OF ALLAH ----*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 1000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

const int mx=5e3;
vii adj[mx];
ll dist[3][mx];

struct info {
  int u,v,w;
};

void dijkstra(int s, int n, int f1) {
  for(int i=1; i<=n; i++) dist[f1][i]=infLL;
  dist[f1][s]=0;

  priority_queue<pll, vll, greater<pll>> pq;
  pq.push({0, s});

  while(!pq.empty()) {
    ll currD = pq.top().F;
    int u = pq.top().S;
    pq.pop();

    if(dist[f1][u]<currD) continue;

    for(auto p : adj[u]) {
      int v = p.F;
      int w = p.S;
      if(currD+w < dist[f1][v]) {
        dist[f1][v]=currD+w;
        pq.push({dist[f1][v], v});
      }
    }
  }
}

int main() {
  optimize();
  int t;
  cin >> t;
  for(int tc=1; tc<=t; tc++) {
    int n,m;
    cin >> n >> m;
    vector<info> edge;

    for(int i=1; i<=5e3; i++) adj[i].clear();

    for(int i=1; i<=m; i++) {
      int u,v,w;
      cin >> u >> v >> w;
      adj[u].PB({ v, w });
      adj[v].PB({ u, w });
      edge.PB({u, v, w});
    }

    dijkstra(1, n, 0);
    dijkstra(n, n, 1);

    ll s1=dist[0][n];
    ll s2=infLL;

    for(auto e : edge) {
      ll d = min( dist[0][e.u] + dist[1][e.v], dist[0][e.v]+dist[1][e.u]);
      if(d+e.w > s1) {
        s2 = min(s2, d+e.w);
      }
      if(d+e.w == s1) {
        s2 = min(s2, d+(e.w * 3));
      }
    }
    cout << "Case " << tc << ": " << s2 << endl;
  }
  return 0;
}
