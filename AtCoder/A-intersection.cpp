#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int l1,r1,l2,r2;
  cin >> l1 >> r1 >> l2 >> r2;
  int temp1=min(r1, r2);
  int temp2=temp1-l2;
  if(l2 < r1) {
    cout << temp1 - l2 << endl;
  }
  else cout << 0 << endl;
  return 0;
}
