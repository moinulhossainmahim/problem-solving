#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int t;
  cin >> t;
  while(t--) {
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int size = unique(v.begin(), v.end()) - v.begin();
    if(size==x)cout << "Good" << endl;
    else if(size<x) cout << "Bad" << endl;
    else cout << "Average" << endl;
  }
  cout << endl;
  return 0;
}
