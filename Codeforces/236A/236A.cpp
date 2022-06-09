
#include<bits/stdc++.h>

using namespace std;

int main() {
  string s1;
  cin>>s1;
  sort(s1.begin(), s1.end());
  s1.erase(unique(s1.begin(), s1.end()), s1.end());
  s1.length() & 1?cout<<"IGNORE HIM!"<<endl:cout<<"CHAT WITH HER!"<<endl;
  return 0;
}