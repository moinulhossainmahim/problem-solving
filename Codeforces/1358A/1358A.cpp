#include<iostream>

using namespace std;

int main() {
  int a,b,c,tt;
  cin>>tt;
  while(tt--) {
    cin>>a>>b;
    c=a*b;
    cout<<c%2+c/2<<endl;
  }
  return 0;
}
