#include<iostream>

using namespace std;

int main() {
  int n,count=0;
  string s;
  cin>>n;
  while(n--) {
    cin>>s;
    if(s[0]=='T')count+=4;
    else if(s[0]=='C')count+=6;
    else if(s[0]=='O')count+=8;
    else if(s[0]=='D')count+=12;
    else if(s[0]=='I')count+=20;
  }
  cout<<count<<endl;
  return 0;
}
