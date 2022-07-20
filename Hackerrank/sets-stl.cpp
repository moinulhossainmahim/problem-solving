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
  set<int> s;
  int t;
  cin >> t;
  while(t--) {
    int p,q;
    cin >> p >> q;
    if(p==1) s.insert(q);
    else if(p==2) s.erase(q);
    else {
      if(s.count (q) ==1 ) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}
