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
    string s;
    cin >> s;
    map<char, int> m;
    int flag = 1;
    if (n != 5) {
      cout << "NO" << endl;
      continue;
    }
    for (int i = 0; i < n; i++) {
      if ((m[s[i]] == 0) && (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' ||
                             s[i] == 'u' || s[i] == 'r')) {
        m[s[i]]++;
      } else {
        flag = 0;
        break;
      }
    }
    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
