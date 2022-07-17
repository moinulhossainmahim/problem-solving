#include<bits/stdc++.h>

using namespace std;


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int n;
  cin>>n;
  vector<int> v(n);

  for(int i=0; i<n; i++) cin>>v[i];

  int s=0,d=0,t=1;

  while(!v.empty()) {
    if(v[0]>v.back()) {
      if(t==1) {
        s+=v[0];
        t=2;
      }
      else {
        d+=v[0];
        t=1;
      }
      v.erase(v.begin());
    }
    else {
      if(t==1) {
        s+=v.back();
        t=2;
      }
      else {
        d+=v.back();
        t=1;
      }
      v.pop_back();
    }
  }
  cout << s << " " << d <<endl;
  return 0;
}
