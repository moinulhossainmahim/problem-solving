#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int md=max(0, (x-a));
    int mc=max(0, (y-b));
    if((mc+md)<=c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
