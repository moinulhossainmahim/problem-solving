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
  int n;
  cin >> n;
  string s;
  s=to_string(n);
  int digitSum=0;
  for(auto u : s) {
    digitSum+=(u-'0');
  }
  string s1=to_string(digitSum);
  string temp=s1;
  reverse(temp.begin(), temp.end());
  if(s1==temp) cout << "1" << endl;
  else cout << "0" << endl;
  return 0;
}
