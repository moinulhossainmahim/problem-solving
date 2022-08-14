#include <bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    long long n;
    cin >> n;
    if ((n ^ 1) == n + 1)
      cout << "0 0 " << n / 2 << endl;
    else
      cout << -1 << endl;
  }
}
