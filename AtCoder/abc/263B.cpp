#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> dp(n);
  for (int i = 1; i < n; i++) {
    cin >> v[i];
    v[i]--;
  }
  for (int i = 1; i < n; i++) {
    dp[i] = dp[v[i]] + 1;
  }
  cout << dp[n - 1] << endl;
}
