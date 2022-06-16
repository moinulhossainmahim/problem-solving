#include<iostream>

using namespace std;

int main() {
  int tt;
  long long int aa,bb;
  cin>>tt;
  while(tt--) {
    cin>>aa>>bb;
    if(aa==bb)cout<<0<<endl;
    else if(aa<=10 && bb<=10) {
      cout<<1<<endl;
    } else if(aa>bb) {
      long int mod=(aa-bb)%10;
      if(mod==0) {
        cout<<(aa-bb)/10<<endl;
      } else {
        cout<<(aa-bb)/10+1<<endl;
      }
    } else {
      long int mod=(bb-aa)%10;
      if(mod==0) {
        cout<<(bb-aa)/10<<endl;
      } else {
        cout<<(bb-aa)/10+1<<endl;
      }
    }
  }
  return 0;
}
