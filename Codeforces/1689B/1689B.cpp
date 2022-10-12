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
    int arr[n + 1];
    int ans[n + 1];
    for (int i = 1; i <= n; i++)
      cin >> arr[i];
    for (int i = 1; i <= n; i++)
      ans[i] = i;

    if (n == 1) {
      cout << -1 << '\n';
      continue;
    }

    for (int i = 1; i <= n; i++) {
      if (i == 1 && arr[i] == ans[i]) {
        swap(ans[i], ans[i + 1]);
      } else if (arr[i] == ans[i]) {
        swap(ans[i], ans[i - 1]);
      }
    }

    for (int i = 1; i <= n; i++)
      cout << ans[i] << " ";
    cout << '\n';
  }
}
