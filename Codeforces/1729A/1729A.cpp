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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1) {
      cout << 1 << endl;
      continue;
    }

    int m = abs(b - c) + (c - 1);
    int n = (a - 1);

    if (m < n)
      cout << 2 << endl;
    else if (m > n)
      cout << 1 << endl;
    else
      cout << 3 << endl;
  }
}
