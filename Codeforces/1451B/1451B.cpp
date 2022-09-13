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
typedef vector<pii> vii;
#define debug(n) cout << (n) << endl;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
      int l, r;
      cin >> l >> r;
      bool f = false;
      for (int i = 0; i < l - 1; i++) {
        if (s[i] == s[l - 1]) {
          f = 1;
          break;
        }
      }
      for (int i = r; i < n; i++) {
        if (s[i] == s[r - 1]) {
          f = 1;
          break;
        }
      }
      cout << (f ? "YES\n" : "NO\n");
    }
  }
}
