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
    map<string, int> m;
    string a[3][n];

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
        m[a[i][j]]++;
      }
    }

    for (int i = 0; i < 3; i++) {
      int cnt = 0;
      for (int j = 0; j < n; j++) {
        if (m[a[i][j]] == 1)
          cnt += 3;
        else if (m[a[i][j]] == 2)
          cnt++;
      }
      cout << cnt << " ";
    }
    cout << '\n';
  }
}
