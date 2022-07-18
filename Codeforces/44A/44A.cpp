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
  vector<pair<string, string>> v(t);
  for(int i=0; i<t; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  int sz = unique(v.begin(), v.end())-v.begin();
  cout << sz << endl;
  return 0;
}
