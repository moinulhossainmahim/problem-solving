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
    int n, j = 0;
    cin >> n;
    int ans[n];
    int l = n / 2;
    if (n % 2 != 0)
      j = 1;
    for (int i = 0; i < n; i++) {
      ans[i] = i + 1;
    }
    for (int i = 0; i < l - 1; i++) {
      swap(ans[j], ans[j + 1]);
      j += 2;
    }
    for (auto u : ans)
      cout << u << " ";
    cout << endl;
  }
}
