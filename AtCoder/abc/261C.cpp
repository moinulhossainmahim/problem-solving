#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  map<string, long long> m;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    if (m[s] != 0)
      cout << s << "(" << m[s] << ")\n";
    else
      cout << s << '\n';
    m[s]++;
  }
}
