#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin>>tt;
  while(tt--) {
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++) {
      cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<arr[n-1]-arr[0]<<endl;
  }
  return 0;
}
