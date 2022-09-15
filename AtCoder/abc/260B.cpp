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

struct myComp {
  constexpr bool operator()(pair<int, int> const &a,
                            pair<int, int> const &b) const noexcept {
    if (a.first > b.first)
      return 1;
    else if (a.first == b.first)
      return (a.second < b.second);
    return 0;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  int a[n];
  int b[n];
  priority_queue<pii, vector<pii>, myComp> m;
  priority_queue<pii, vector<pii>, myComp> e;
  priority_queue<pii, vector<pii>, myComp> zz;
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m.push({a[i], i + 1});
  }

  for (int i = 0; i < n; i++) {
    cin >> b[i];
    e.push({b[i], i + 1});
  }

  for (int i = 0; i < x; i++) {
    int t = m.top().second;
    m.pop();
    s.insert(t);
  }

  int j = 0;
  while (j < y) {
    int t = e.top().second;
    e.pop();
    if (s.find(t) != s.end())
      continue;
    s.insert(t);
    j++;
  }

  for (int i = 0; i < n; i++)
    zz.push({a[i] + b[i], i + 1});

  int k = 0;
  while (k < z) {
    int t = zz.top().second;
    zz.pop();
    if (s.find(t) != s.end())
      continue;
    s.insert(t);
    k++;
  }
  for (auto u : s)
    cout << u << " ";
  cout << '\n';
}
