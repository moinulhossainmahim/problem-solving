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
    ll a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    int i = 0;
    while (i < n - 1 && a[i + 1] >= a[i])
      i++;
    while (i < n - 1 && a[i + 1] <= a[i])
      i++;
    cout << ((i == n - 1) ? "YES\n" : "NO\n");
  }
}
