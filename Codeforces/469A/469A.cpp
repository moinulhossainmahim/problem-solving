#include<iostream>

using namespace std;

int main() {
  int t=2,n,i;
  cin>>n;
  int arr[n] = {0};
  while(t--) {
    int a,b;
    cin>>a;
    for(i=0; i<a; i++) {
      cin>>b;
      arr[b-1]=1;
    }
  }
  for(i=0; i<n; i++) {
    if(arr[i]==0){
      cout<<"Oh, my keyboard!"<<endl;
      return 0;
    }
  }
  cout<<"I become the guy."<<endl;
  return 0;
}
