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
    string s1;
    cin >> s1;
    string a, b;
    int n = s1.size();
    int s = 0, e = n - 1;
    int f = 1;
    for (int i = 0; i < n; i++) {
      if (s1[s] == s1[e])
        s++, e--;
      else
        break;
    }
    for (int i = s; i < e; i += 2) {
      if (s1[i] != s1[i + 1]) {
        f = 0;
        break;
      }
    }
    if (f)
      cout << "Draw\n";
    else
      cout << "Alice\n";
  }
}
