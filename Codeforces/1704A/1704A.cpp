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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    char tmp = t[0];
    while (s.size() > t.size()) {
      if (s[0] == tmp) {
        s[1] = tmp;
        s.erase(s.begin());
      } else {
        s.erase(s.begin());
      }
    }
    cout << ((s == t) ? "YES\n" : "NO\n");
  }
}
