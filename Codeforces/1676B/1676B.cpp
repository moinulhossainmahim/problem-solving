#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int ans=0;
    int n,i;
    cin>>n;
    int arr[n];
    int mn=INT_MAX;
    for(i=0; i<n; i++) {
      cin>>arr[i];
      mn=min(mn, arr[i]);
    }
    for(i=0; i<n; i++) {
      ans+=arr[i]-mn;
    }
    cout<<ans<<endl;
  }
}
