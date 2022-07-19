/* 
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int tt;
  cin >> tt;
  for(int tc=1; tc<=tt; tc++) {
    long long int n1,n2,mn,mx;
    cin >> n1 >> n2;
    mx=max(n1, n2);
    mn=min(n1, n2);
    int count=0;
    for(int i=mn; i<=mx; i++) {
      string s;
      s=to_string(i);
      string temp=s;
      reverse(temp.begin(), temp.end());
      if(s==temp)count++;
    }
    cout << "Case " << tc << ": " << count << endl;
  }
  return 0;
}