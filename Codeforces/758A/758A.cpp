#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[100];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int count = 0;
  sort(arr, arr+n);
  for(int i=0; i<n-1; i++) {
    count = count + (arr[n-1] - arr[i]);
  }
  cout<<count<<endl;
  return 0;
}