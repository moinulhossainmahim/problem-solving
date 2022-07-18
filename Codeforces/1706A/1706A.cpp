#include<bits/stdc++.h>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int t;
  cin >> t;
  while(t--) {
    int n,m,n1;
    cin >> n >> m;
    vector<string> v;
    string s(m, 'B');
    string s2,s3;
    for(int i=0; i<n; i++) {
      cin >> n1;
      s2=s;
      s2[n1-1]='A';
      s3=s;
      s3[m-n1]='A';
      if(s2<s3) {
        s=s2;
      } else {
        s=s3;
      }
      v.push_back(s);
    }
    cout << *min_element(v.begin(), v.end()) << endl;
  }
  return 0;
}
