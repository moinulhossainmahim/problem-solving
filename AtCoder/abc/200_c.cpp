#include <bits/stdc++.h>

using namespace std;

int nums[200];

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    nums[a[i] % 200]++;
  }
  long long ans = 0;
  for (int i = 0; i < 200; i++) {
    ans += (nums[i] * (nums[i] - 1)) / 2;
  }
  cout << ans << endl;
}
