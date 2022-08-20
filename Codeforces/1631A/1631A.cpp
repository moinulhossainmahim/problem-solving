#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> b(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++) {
    if (a[i] < b[i]) {
      int temp = a[i];
      a[i] = b[i];
      b[i] = temp;
    }
  }
  int amax = INT_MIN, bmax = INT_MIN;
  for (int i = 0; i < n; i++) {
    amax = max(amax, a[i]);
    bmax = max(bmax, b[i]);
  }
  cout << amax * bmax << endl;
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
