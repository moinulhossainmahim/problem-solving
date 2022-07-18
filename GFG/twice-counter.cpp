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
  map<string, int>m;
  int count=0;
  for(int i=0; i<n; i++) {
      string s;
      cin >> s;
      m[s]++;
  }
  for(auto u : m) {
    if(u.second==2)count++;
  }
  cout << count << endl;
}
