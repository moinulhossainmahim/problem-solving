#include<iostream>

using namespace std;

int main() {
  int tt,i;
  cin>>tt;
  int result=0;
  while(tt--) {
    int count=0;
    string s1;
    for(i=0; i<3; i++) {
      cin>>s1[i];
      if(s1[i]=='1') {
        count++;
      }
    }
    if(count>=2) result++;
  }
  cout<<result<<endl;
  return 0;
}
