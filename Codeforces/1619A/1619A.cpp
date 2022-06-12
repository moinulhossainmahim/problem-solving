#include<iostream>

using namespace std;

int main() {
  int tt,i;
  string s;
  cin>>tt;
  while(tt--) {
    cin>>s;
    int flag=1;
    if(s.length()%2==0){
      for(i=0; i<s.length()/2; i++) {
        if(s[i]!=s[i+s.length()/2]) {
          flag=0;
        }
      }
    } else {
      flag=0;
    }
    flag?cout<<"YES":cout<<"NO";
    cout<<endl;
  }
  return 0;
}
