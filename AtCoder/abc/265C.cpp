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

const int mx = 512;
int vis[mx][mx];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int h, w;
  cin >> h >> w;
  vector<string> grid(h);
  for (int i = 0; i < h; i++) {
    cin >> grid[i];
  }
  int x = 0, y = 0;
  while (1) {
    if (vis[x][y] == 1) {
      return cout << -1 << endl, 0;
    }
    vis[x][y] = 1;
    if (grid[x][y] == 'U' && x != 0) {
      --x;
    } else if (grid[x][y] == 'D' && x != h - 1) {
      ++x;
    } else if (grid[x][y] == 'L' && y != 0) {
      --y;
    } else if (grid[x][y] == 'R' && y != w - 1) {
      ++y;
    } else {
      break;
    }
  }
  cout << x + 1 << " " << y + 1 << endl;
}
