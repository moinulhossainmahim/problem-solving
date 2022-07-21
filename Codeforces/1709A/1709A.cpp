#include<bits/stdc++.h>

using namespace std;

int a[10];

int main() {
  int t;
  cin >> t;
  while(t--) {
    int x;
    cin >> x;
    cin >> a[1] >> a[2] >> a[3];
    if(a[x] && a[a[x]]) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
