#include<iostream>

using namespace std;

int main() {
  int tt,i;
  string s1;
  cin>>tt;
  while(tt--) {
    cin>>s1;
    int aCount=0,bCount=0,cCount=0;
    for(i=0; i<s1.length(); i++) {
      if(s1[i]=='A')aCount++;
      else if(s1[i]=='B')bCount++;
      else if(s1[i]=='C')cCount++;
    }
    if(aCount==bCount){
      if(cCount)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    else if(aCount>bCount)cout<<"NO"<<endl;
    else {
      int temp=bCount-aCount;
      if(temp==cCount)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
  return 0;
}
