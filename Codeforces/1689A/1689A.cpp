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
    int n, m, k;
    cin >> n >> m >> k;
    string a, b, c;
    cin >> a >> b;
    sort(a.begin(), a.end(), greater<char>());
    sort(b.begin(), b.end(), greater<char>());
    int ak = 0, bk = 0;
    while (!a.empty() && !b.empty()) {
      bool temp = b.back() < a.back();
      if (temp && bk == k)
        temp = 0;
      if (!temp && ak == k)
        temp = 1;

      if (temp) {
        c.push_back(b.back());
        b.pop_back();
        bk++;
        ak = 0;
      } else {
        c.push_back(a.back());
        a.pop_back();
        ak++;
        bk = 0;
      }
    }
    cout << c << '\n';
  }
}
