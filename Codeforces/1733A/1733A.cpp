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
    int n, k;
    cin >> n >> k;
    ll arr[n];
    ll res = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    if (k + 1 == n || k == n) {
      for (int i = 0; i < n; i++)
        res += arr[i];
      cout << res << endl;
      continue;
    }
    for (int i = 0; i < n; i++) {
      if (arr[i] % k != 0) {
        res += arr[i];
      }
    }
    cout << res << endl;
  }
}
