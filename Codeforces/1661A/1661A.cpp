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
    ll b[n];
    ll s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    bool yes = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] < b[i])
        swap(a[i], b[i]);
      if (yes) {
        s1 += abs(a[i] - a[i - 1]);
        s2 += abs(b[i] - b[i - 1]);
      }
      yes = 1;
    }
    cout << s1 + s2 << endl;
  }
}
