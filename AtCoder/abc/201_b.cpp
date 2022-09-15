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
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<ll, string> m;
  vl v;
  for (int i = 0; i < n; i++) {
    ll h;
    string name;
    cin >> name >> h;
    m[h] = name;
    v.push_back(h);
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  cout << m[v[1]] << endl;
}
