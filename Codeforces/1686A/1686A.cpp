#include<iostream>

using namespace std;

int main() {
  int tt;
  cin>>tt;
  while(tt--) {
    int n,i,sum=0,div=0,flag=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++) {
      cin>>arr[i];
      sum+=arr[i];
    }
    if(sum%n!=0){
      cout<<"NO"<<endl;
      continue;
    }
    div=sum/n;
    for(i=0; i<n; i++) {
      if(arr[i]==div)flag=1;
    }
    flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
