#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      v[i] = a;
    }
    for (int k = 0; k < n; k++) {
      int aa;
      cin >> aa;
      for (int j = 0; j < aa; j++) {
        char c;
        cin >> c;
        if (c == 'D')
          v[k] = (v[k] + 1 % 10);
        else
          v[k] = (v[k] - 1) % 10;

        if (v[k] < 0)
          v[k] = (v[k] + 10) % 10;
      }
    }
    for (auto u : v)
      cout << u << " ";
    cout << endl;
  }
}
