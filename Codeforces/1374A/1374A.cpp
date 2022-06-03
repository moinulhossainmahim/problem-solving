#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt,x,y,n;
  cin>>tt;
  while(tt--) {
    cin>>x>>y>>n;
    cout<<(n-y)/x*x+y<<endl;
  }
  return 0;
}
