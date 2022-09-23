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
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = "@" + s;
    ll ans = 0;
    vi vis(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      if (s[i] == '1')
        vis[i] = 2;
    }
    for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j += i) {
        if (vis[j] == 0) {
          vis[j] = 1;
          ans += i;
        } else if (vis[j] == 2)
          break;
      }
    }
    cout << ans << '\n';
  }
}
