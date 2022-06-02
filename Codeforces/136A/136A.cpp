#include<iostream>

using namespace std;

int main() {
  int n,i;
  cin>>n;
  int a1[n],a2[n];
  for(i=0; i<n; i++) {
    int temp;
    cin>>a1[i];
    temp=a1[i];
    a2[temp-1]=i+1;
  }
  for(i=0; i<n; i++)cout<<a2[i]<<" ";
  cout<<endl;
  return 0;
}