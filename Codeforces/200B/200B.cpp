#include<iostream>

using namespace std;

int main() {
  int i,n,number;
  double sum=0;
  double res;
  cin>>n;
  for(i=0; i<n; i++) {
    cin>>number;
    sum+=number;
  }
  res=sum/n;
  cout<<res<<endl;
  return 0;
}
