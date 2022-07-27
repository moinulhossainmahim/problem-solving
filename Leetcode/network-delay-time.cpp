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

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

const int mx=1e5+123;
ll dis[mx];
vii adj[mx];

void dijkstra(int s, int n) {
  for(int i=1; i<=n; i++) dis[i]=infLL;
  priority_queue<pll, vll, greater<pll>> pq;
  dis[s]=0;
  pq.push({0, s});
  while(!pq.empty()) {
    ll node = pq.top().S;
    ll currD = pq.top().F;
    pq.pop();

    if(dis[node]<currD) continue;
    
    for(auto p : adj[node]) {
      int v=p.F;
      int w=p.S;
      if(currD+w<dis[v]) {
        dis[v]=currD+w;
        pq.push({dis[v], v});
      }
    }
  }
}

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        optimize();
        for(int i=0; i<=n; i++) adj[i].clear();                
        for(auto u : times) {
            adj[u[0]].PB({u[1], u[2]});
        }
        
        dijkstra(k, n);
        
        ll MX=-1;
        for(int i=0; i<=n; i++) {
            MX=max(dis[i], MX);
        }
        
        if(MX==infLL) MX=-1;
        return MX;
    }
};