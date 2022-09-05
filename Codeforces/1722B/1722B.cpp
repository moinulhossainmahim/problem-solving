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
    cin >> n;
    string s1, s2;
    char c;
    for (int i = 0; i < n; i++) {
      cin >> c;
      if (c == 'G')
        c = 'B';
      s1 += c;
    }
    for (int i = 0; i < n; i++) {
      cin >> c;
      if (c == 'G')
        c = 'B';
      s2 += c;
    }
    if (s1 == s2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
