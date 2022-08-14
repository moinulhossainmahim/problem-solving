#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      m[a]++;
    }
    int ans = -1;
    for (auto u : m) {
      if (u.second > 2) {
        ans = u.first;
        break;
      }
    }
    cout << ans << endl;
  }
}
