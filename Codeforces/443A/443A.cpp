#include<bits/stdc++.h>

using namespace std;

int main() {
  string s1;
  cin>>s1;
  string s2;
  int i,j=0;
  for(i=0; i<s1.length(); i++) {
    if(s1[i]==',' || i==s1.length()-1)
    {
      s2[j++]=s1[i-1];
      cout<<s1[i-1]<<endl;
    }
  }
  sort(s2.begin(), s2.end());
  s2.erase(unique(s2.begin(), s2.end()));

  return 0;
}
