#include<iostream>

using namespace std;

int main() {
  int tt,in=0,out=0,max=-65536;
  cin>>tt;
  int temp=0;
  while(tt--) {
    cin>>out>>in;
    temp=(temp+(in-out));
    if(temp>max) {
      max=temp;
    }
  }
  cout<<max<<endl;
  return 0;
}
