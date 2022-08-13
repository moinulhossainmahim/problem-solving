#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b;
    cin >> a >> b;

    string s1;
    string s2;
    cin >> s1 >> s2;

    if (s1 == s2) {
      cout << "YES" << endl;
      continue;
    }

    char f = s1[0];
    for (int i = 1; i < (a - b) + 1; i++) {
      if (s2[0] == '1') {
        s1[i] = max(f, s1[i]);
        cout << f << " " << s1[i] << endl;
      } else {
        s1[i] = min(f, s1[i]);
      }
      f = s1[i];
      s1.erase(s1.begin(), s1.begin() + 1);
      cout << s1 << endl;
    }
    if (s1 == s2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
