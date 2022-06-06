#include<bits/stdc++.h>

using namespace std;

int main() {
  int t,n,x,i,r;
  cin>>t;
  while(t--) {
    int eC=0,oC=0;
    cin>>n;
    for(i=0; i<n; i++) {
      cin>>x;
      if(x & 1)oC++;
    }
    cout<<min(oC, n-oC)<<endl;
  }
  return 0;
}
