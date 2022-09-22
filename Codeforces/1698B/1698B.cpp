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
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    ll arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    if (k <= 1) {
      cout << (n - 1) / 2 << endl;
      continue;
    }
    for (int i = 1; i < n - 1; i++) {
      if (arr[i] > arr[i - 1] + arr[i + 1])
        ans++;
    }
    cout << ans << '\n';
  }
}
