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
    ll ans = 0;
    ll arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int l = 0;
    while (l < n && arr[l] == 0)
      l++;
    for (int i = l; i < n - 1; i++) {
      ans += arr[i];
      if (arr[i] == 0)
        ans++;
    }
    cout << ans << '\n';
  }
}
