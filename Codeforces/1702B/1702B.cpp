#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int t;
  cin >> t;
  while(t--) {
    string str;
    cin >> str;
    set<char> s;
    int ans=0;
    for(int i=0; i<str.size(); i++) {
      s.insert(str[i]);
      if(s.size()>3) {
        ans++;
        s.clear();
        s.insert(str[i]);
      }
    }
    if(!s.empty()) ans++;
    cout << ans << endl;
  }
}
