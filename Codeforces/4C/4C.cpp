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
  map<string, int> cnt;
  while(t--) {
    string s;
    cin >> s;
    if(cnt[s]) {
      cout << s << cnt[s] << endl;
    } else {
      cout << "OK" << endl;
    }
    cnt[s]++;
  }
  return 0;
}
