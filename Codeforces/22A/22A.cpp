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
  int n;
  cin >> n;
  while(n--) {
    int a;
    cin >> a;
    s.insert(a);
  }
  if(s.size()==1) cout << "NO" << endl;
  else {
    cout << *(++s.begin()) << endl;
  }
  return 0;
}
