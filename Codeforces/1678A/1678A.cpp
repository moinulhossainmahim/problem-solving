#include<iostream>

using namespace std;

int main() {
  int tt,i;
  cin>>tt;
  while(tt--) {
    int n,sum=0,res,flag=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++) {
      cin>>arr[i];
      sum+=arr[i];
    }
    res=sum/2;
    cout<<res+1<<endl;
  }
  return 0;
}
