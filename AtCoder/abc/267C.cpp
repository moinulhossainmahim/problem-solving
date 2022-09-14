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

#define PB push_back
#define debug(n) cout << (n) << endl

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  int nums[n];
  for (int i = 0; i < n; i++)
    cin >> nums[i];
  ll ans = -1000000000000000000ll;
  vi v(m);
  for (int i = 0; i < n; i++) {
    v[i] = nums[i];
    if (i >= m - 1) {
      ll temp = 0;
      for (int j = 0; j < m; j++) {
        temp += ((j + 1) * v[j]);
      }
      v.erase(v.begin());
      ans = max(ans, temp);
    }
  }
  cout << ans << endl;
}
