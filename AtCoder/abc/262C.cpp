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
  int n;
  cin >> n;
  int arr[n + 2];
  int s = 0;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    if (arr[i] == i)
      s++;
  }
  ll ans = (ll)s * (s - 1) / 2;
  for (int i = 1; i <= n; i++) {
    if (arr[i] > i && arr[arr[i]] == i)
      ans++;
  }
  cout << ans << endl;
}
