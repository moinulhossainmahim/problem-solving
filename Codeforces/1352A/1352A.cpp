#include<iostream>

using namespace std;

int main() {
  int tt;
  cin>>tt;
  while(tt--) {
    int n,total=0, m=1;
    cin>>n;
    int arr[6];
    for(int i=1; i<6; i++) {
      arr[i]=n%10;
      n=n/10;
      if(arr[i]!=0) total++;
    }
    cout<<total<<endl;
    for(int i=1; i<6; i++) {
      if(arr[i]!=0)cout<<arr[i]*m<<" ";
      m=m*10;
    }
    cout<<endl;
  }
  return 0;
}
