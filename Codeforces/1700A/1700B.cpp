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
    int n;
    string s;
    cin >> n >> s;
    string ans;
    if (s[0] != '9') {
      for (int i = 0; i < n; i++) {
        int t = s[i] - '0';
        int t1 = 9 - t;
        ans += t1 + '0';
      }
      cout << ans << endl;
      continue;
    }
    int c = 0;
    for (int i = n - 1; i >= 0; i--) {
      int t = s[i] - '0';
      t += c;
      if (t > 1) {
        int m = 11 - t;
        c = 1;
        ans += m + '0';
      } else {
        int m = 1 - t;
        c = 0;
        ans += m + '0';
      }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
  }
}
