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
    ll arr[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
    }
    if (n % 2 == 1) {
      cout << "Mike\n";
      continue;
    }
    int ans = 1;
    for (int i = 1; i <= n; i++) {
      if (arr[i] < arr[ans]) {
        ans = i;
      }
    }
    if (ans % 2 == 0)
      cout << "Mike\n";
    else
      cout << "Joe\n";
  }
}
