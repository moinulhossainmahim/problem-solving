/*
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include <bits/stdc++.h>

using namespace std;

#define optimize()                                                             \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0);

int main() {
  optimize();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      v[i] = a;
      s.insert(a);
    }
    if ((n - s.size()) % 2 == 0)
      cout << s.size() << endl;
    else
      cout << s.size() - 1 << endl;
  }
  return 0;
}
