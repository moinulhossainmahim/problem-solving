#include<iostream>

using namespace std;

int main() {
  int n,count=0,i;
  cin>>n;
  for(i=1; i<=n/2; i++) {
    if(n%i==0)count++;
  }
  cout<<count<<endl;
  return 0;
}
