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
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    ll x = LONG_LONG_MIN;
    int a, b;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        ll l;
        cin >> l;
        if (l > x) {
          x = l;
          a = i;
          b = j;
        }
      }
    }
    int t1 = max(a + 1, (n - a));
    int t2 = max(b + 1, (m - b));
    cout << t1 * t2 << endl;
  }
}
