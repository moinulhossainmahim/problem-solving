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
    int arr[10123];
    int f, s;
    for (int i = 1; i <= n; i++)
      cin >> arr[i];
    if (arr[1] % 2 == 0)
      f = 0;
    else
      f = 1;
    if (arr[2] % 2 == 0)
      s = 0;
    else
      s = 1;
    int ok1 = 1, ok2 = 1;
    for (int i = 1; i <= n; i += 2) {
      if (arr[i] % 2 != f) {
        ok1 = 0;
        break;
      }
    }
    for (int i = 2; i <= n; i += 2) {
      if (arr[i] % 2 != s) {
        ok2 = 0;
        break;
      }
    }
    if (ok1 && ok2)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
