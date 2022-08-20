#include <bits/stdc++.h>

using namespace std;

#define optimize()                                                             \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

int main() {
  optimize();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> cnt;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      int u;
      cin >> u;
      cnt[u]++;
      v[i] = u;
    }
    int temp;
    for (auto u : cnt) {
      if (u.second == 1)
        temp = u.first;
    }
    int ans = find(v.begin(), v.end(), temp) - v.begin() + 1;
    cout << ans << endl;
  }
}
