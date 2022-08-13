/*
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include <bits/stdc++.h>

using namespace std;

#define optimize()                                                             \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

int main() {
  optimize();
  int tt;
  cin >> tt;
  while (tt--) {
    char grid[8][8];
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> grid[i][j];
      }
    }

    for (int i = 1; i < 8; i++) {
      for (int j = 1; j < 8; j++) {
        if (grid[i][j] == '#' && grid[i - 1][j - 1] == '#' &&
            grid[i - 1][j + 1] == '#' && grid[i + 1][j - 1] == '#' &&
            grid[i + 1][j + 1] == '#') {
          cout << i + 1 << " " << j + 1 << endl;
          break;
        }
      }
    }
  }
  return 0;
}
