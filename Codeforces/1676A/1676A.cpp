#include<iostream>

using namespace std;

void solve() {
  string s;
  cin>>s;
  if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]) {
    cout<<"YES"<<endl;
  } else {
    cout<<"NO"<<endl;
  }
}

int main() {
  int tt;
  cin>>tt;
  while(tt--) {
    solve();
  }
  return 0;
}
