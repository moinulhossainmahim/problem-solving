#include<iostream>

using namespace std;

int main() {
  int t;
  long long int a,b,n1,n2;
  cin>>t;
  while(t--) {
    cin>>a>>b;
    if(a==0) cout<<1<<endl;
    else cout<<(2*b+a+1)<<endl;
  }
  return 0;
}
