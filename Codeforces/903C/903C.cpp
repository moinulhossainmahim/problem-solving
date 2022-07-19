/* 
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int t;
  cin >> t;
  map<int, int> cnt;
  while(t--) {
    int n;
    cin >> n;
    cnt[n]++;
  }
  int ans=0;
  for(int i=0; i<t; i++) {
    ans=max(ans, cnt[i]);
  }
  cout << ans << endl;
  return 0;
}
