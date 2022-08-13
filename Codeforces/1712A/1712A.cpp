#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
      cin >> v[i];

    if (n == k) {
      cout << 0 << endl;
      continue;
    }
    for (int i = 0; i < k; i++) {
      if (v[i] != i + 1 && v[i] > k) {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
