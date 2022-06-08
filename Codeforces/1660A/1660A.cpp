#include<iostream>

using namespace std;

int main() {
  int t;
  long long int a,b,n1,n2;
  cin>>t;
  while(t--) {
    cin>>a>>b;
    if(a==0) cout<<1<<endl;
    else if(b==0) {
      n1=a*1;
      cout<<n1+1<<endl;
    } else {
      n1=a*1;
      n2=b*2;
      cout<<n1+n2+1<<endl;
    }
  }
  return 0;
}
