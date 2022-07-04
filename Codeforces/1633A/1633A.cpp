#include<iostream>

using namespace std;

int main() {
  int tt;
  cin>>tt;
  while(tt--) {
    int n,a,b;
    cin>>n;
    a=n%7;
    if(a==0) {
      cout<<n<<endl;
    }
    else {
      b=7-a;
      int l=n/10;
      if(b+l<10) {
        cout<<n+b<<endl;
      } else {
        cout<<n-a<<endl;
      }
    }
  }
  return 0;
}
