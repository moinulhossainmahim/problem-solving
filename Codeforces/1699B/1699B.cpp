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

void printfCol(int m, int p) {
  int start = p;
  for (int i = 1; i <= m; i += 2) {
    if (start) {
      cout << "1 0 ";
    } else {
      cout << "0 1 ";
    }
    start ^= 1;
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    int p = 1;
    for (int i = 1; i <= n; i += 2) {
      if (p) {
        printfCol(m, 1);
        printfCol(m, 0);
      } else {
        printfCol(m, 0);
        printfCol(m, 1);
      }
      p ^= 1;
    }
  }
}
