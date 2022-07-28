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

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

const int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
const int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

void dijkstra(vector<vi> &grid, int n, int m) {
  ll dist[n][m];
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      dist[i][j]=infLL;
    }
  }
  priority_queue<pair<ll, pii>, vector<pair<ll, pii>>, greater<pair<ll, pii>>> pq;
  dist[0][0]=grid[0][0];
  pq.push({grid[0][0], {0, 0}});

  while(!pq.empty()) {
    pii u = pq.top().S;
    ll currD = pq.top().F;
    int x = u.F;
    int y = u.S;
    pq.pop();

    if(dist[x][y] < currD) continue;

    for(int i=0; i<4; i++) {
      int x1=x+dx[i];
      int y1=y+dy[i];

      if(x1>=0 && x1<n && y1>=0 && y1<m && grid[x1][y1]+currD<dist[x1][y1]) {
        dist[x1][y1] = currD+grid[x1][y1];
        pq.push({dist[x1][y1], {x1, y1}});
      }
    }
  }
  cout << dist[n-1][m-1] << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,m;
    cin >> n >> m;
    vector<vi> grid(n, vector<int>(m, -1));
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        cin >> grid[i][j];
      }
    }
    dijkstra(grid, n, m);
  }
}

/* 
  2
  4
  5
  0 3 1 2 9
  7 3 4 9 9
  1 7 5 5 3
  2 3 4 2 5
  1
  6
  0 1 2 3 4 5

*/