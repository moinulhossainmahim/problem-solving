#include<iostream>

using namespace std;

int main() {
  int tt;
  cin>>tt;
  while(tt--) {
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1==l2)cout<<l1<<endl;
    else if(l1<l2) {
      if(r1>=l2)cout<<l2<<endl;
      else cout<<l1+l2<<endl;
    } else if(l1>l2) {
      if(r2>=l1)cout<<l1<<endl;
      else cout<<l1+l2<<endl;
    }
  }
  return 0;
}
