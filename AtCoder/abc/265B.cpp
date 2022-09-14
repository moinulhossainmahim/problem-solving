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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m, t;
  cin >> n >> m >> t;
  vl q(n + 1, 0);
  vl rooms(n - 1);
  for (int i = 0; i < n - 1; i++)
    cin >> rooms[i];
  for (int i = 0; i < m; i++) {
    ll x, y;
    cin >> x >> y;
    q[x] = y;
  }

  for (int i = 0; i < n - 1; i++) {
    t += q[i + 2];
    t -= rooms[i];
    if (t <= 0)
      return cout << "No\n", 0;
  }
  cout << "Yes\n";
  return 0;
}
