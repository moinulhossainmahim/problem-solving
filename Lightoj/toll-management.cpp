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
const ll infLL = 1000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
//
//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
//#else
//#define dbg(args...)

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }


int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

const int mx=1e4+123;
vii adj[3][mx];
ll dist[3][mx];

struct info {
  int u, v, w;
};

void dijkstra(int s, int n, int f1) {
  for(int i=0; i<=n; i++) dist[f1][i]=infLL;
  dist[f1][s]=0;
  priority_queue<pll, vll, greater<pll>> pq;
  pq.push({0, s});

  while(!pq.empty()) {
    ll currD = pq.top().F;
    int u = pq.top().S;
    pq.pop();
 
    if(dist[f1][u]<currD) continue;

    for(auto p : adj[f1][u]) {
      int v = p.F;
      int w = p.S;
      if(currD+w<dist[f1][v]) {
        dist[f1][v]=currD+w;
        pq.push({dist[f1][v], v});
      }
    }
  }

}

int main()
{
	optimize();
  int t;
  cin >> t;
  for(int tc=1; tc<=t; tc++) {
    int n,m,s,t,p;
    cin >> n >> m >> s >> t >> p;
    vector<info> edge;

    for(int i=0; i<=n; i++) {
      adj[0][i].clear();
      adj[1][i].clear();
    }

    for(int i=0; i<m; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      adj[0][u].PB({ v, w });
      adj[1][v].PB({ u, w });
      edge.PB({ u, v, w });
    }

    dijkstra(s, n, 0);
    dijkstra(t, n, 1);

    ll ans=-1;
    for(auto e : edge) {
      int u = e.u;
      int v = e.v;
      int w = e.w;
      ll cost = dist[0][u] + w + dist[1][v];

      if(cost<=p) {
        ans = max( ans, ll(w) );
      }
    }
    cout << "Case " << tc << ": " << ans << endl;
  }
	return 0;
}