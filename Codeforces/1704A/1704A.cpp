#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int m, n;
    cin >> m >> n;
    string s;
    string s1;
    cin >> s >> s1;

    if (s == s1) {
      cout << "YES" << endl;
      continue;
    }

    int flag = 0;

    char f = s[0];
    for (int i = 1; i < m; i++) {
      if (s1[0] == '1') {
        char ff = s[1];
        s[1] = max(f, ff);
        cout << "max: " << max(f, ff) << endl;
        f = s[1];
      } else {
        char fff = s[1];
        s[1] = min(f, fff);
        f = s[1];
      }

      s.erase(s.begin() + 1);

      cout << s << endl;

      if (s == s1) {
        flag = 1;
        break;
      }
    }
    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
