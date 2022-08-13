#include <iostream>

using namespace std;

int main() {
  int s, n, i;
  string s1;
  cin >> s;
  while (s--) {
    string s2;
    cin >> n;
    cin >> s1;
    for (i = 0; i < n; i++) {
      if (s1[i] == 'U') {
        s2 += 'D';
      } else if (s1[i] == 'D') {
        s2 += 'U';
      } else if (s1[i] == 'L' || s1[i] == 'R') {
        s2 += s1[i];
      }
    }
    cout << s2 << endl;
  }
  return 0;
}
