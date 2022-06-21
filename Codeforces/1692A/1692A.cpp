#include<iostream>

using namespace std;

int main() {
  int tt;
  cin>>tt;
  while(tt--) {
    int count=0,i; 
    int arr[3],n1;
    cin>>n1;
    for(i=0; i<3; i++) {
      cin>>arr[i];
      if(arr[i]>n1)count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
