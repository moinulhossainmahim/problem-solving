#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int sum=0;
    set<int> s;
    for(int i=9; i>0; i--) {
      int temp=sum+i;

      if(temp>n) continue;

      if(temp==n) {
        s.insert(i);
        break;
      } else if(temp<n) {
        sum+=i;
        s.insert(i);
      }
    }
    for(auto u : s) cout << u;
    cout << endl;
  }
}
