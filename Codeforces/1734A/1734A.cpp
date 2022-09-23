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
    vl v(n);
    ll ans = LONG_LONG_MAX;
    for (int i = 0; i < n; i++)
      cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i < n - 1; i++) {
      ans = min(ans, abs(v[i] - v[i - 1]) + abs(v[i + 1] - v[i]));
    }
    cout << ans << '\n';
  }
}
