#include<bits/stdc++.h>

using namespace std;

int main() {
  int n,i,result=0;
  string s1,s2;
  cin>>n>>s1>>s2;
  for(i=0; i<n; i++) {
    result=result+min(10-abs(s1[i]-s2[i]), abs(s1[i]-s2[i]));
  }
  cout<<result<<endl;
  return 0;
}
