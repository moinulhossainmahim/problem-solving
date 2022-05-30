#include<bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin>>s>>t;
  int i=0;
  int size = s.size();
  if(size > 100 || size > 100 || s[0] == '\0' || t[0] == '\0' ) return 0;
  for(i=0; i<size; i++) {
    if(s[i] != t[size-i-1]) {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
