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
    int n;
    cin >> n;
    int arr[112];
    int ans = INT_MIN;
    for (int i = 1; i <= n; i++) {
      int a;
      cin >> a;
      arr[a] = i;
      ans = max(ans, a);
    }
    cout << arr[ans] << endl;
  }
}
