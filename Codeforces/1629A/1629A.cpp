#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e3 + 123;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].first;
  for (int i = 0; i < n; i++)
    cin >> v[i].second;

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if (v[i].first > k)
      break;
    k += v[i].second;
  }
  cout << k << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}
