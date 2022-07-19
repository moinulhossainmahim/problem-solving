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
  for(int i=1; i<=t; i++) {
    int n,m;
    cin >> n >> m;
    map<pair<int, int>, bool> cnt;
    bool flag=1;
    while(m--) {
      int a,b;
      cin >> a >> b;
      if(cnt[{a, b}]) flag=0;
      cnt[{a, b}] = 1;
    }
    if(flag==1) cout << "Scenario #" << i << ": possible" << endl;
    else cout << "Scenario #" << i << ": impossible" << endl;
  }
  return 0;
}
