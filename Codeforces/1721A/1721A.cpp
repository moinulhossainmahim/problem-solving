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
    set<char> s;
    for (int i = 0; i < 4; i++) {
      char c;
      cin >> c;
      s.insert(c);
    }
    if (s.size() == 2)
      cout << 1 << endl;
    else if (s.size() == 3)
      cout << 2 << endl;
    else if (s.size() == 1)
      cout << 0 << endl;
    else if (s.size() == 4)
      cout << 3 << endl;
  }
}
