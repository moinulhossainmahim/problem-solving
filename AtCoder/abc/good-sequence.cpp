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
  int n;
  cin >> n;
  map<int, int> cnt;
  for(int i=0; i<n; i++) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  int ans=0;
  for(auto u : cnt) {
    if(u.first<=u.second) ans+=(u.second-u.first);
    else ans+=u.second;
  }
  cout << ans << endl;
  return 0;
}
