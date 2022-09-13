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
    string ans = "";
    int a;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == '0') {
        a = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
        i -= 2;
      } else {
        a = s[i] - '0';
      }
      ans = (char)(a + 'a' - 1) + ans;
    }
    cout << ans << endl;
  }
}
