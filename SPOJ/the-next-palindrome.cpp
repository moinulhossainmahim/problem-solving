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

string solve(ll k, string s) {
  string t = s;
  for (ll i = k / 2; i < k; i++) {
    s[i] = s[k - i - 1];
  }
  if (s > t)
    return s;
  for (ll i = (k - 1) / 2; i >= 0; i--) {
    if (t[i] != '9') {
      t[i]++;
      break;
    }
    t[i] = '0';
  }
  for (ll i = k / 2; i < k; i++) {
    t[i] = t[k - i - 1];
  }
  if (t[0] == '0') {
    t += '1';
    t[0] = '1';
  }
  return t;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    ll k = s.size();
    cout << solve(k, s) << endl;
  }
}
