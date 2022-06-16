#include<iostream>

using namespace std;

int main() {
  int tt;
  long int n;
  cin>>tt;
  while(tt--) {
    cin>>n;
    if(n%2==0) {
      cout<<n/2-1<<endl;
    } else {
      cout<<n/2<<endl;
    }
  }
  return 0;
}
