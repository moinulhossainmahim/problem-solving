#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int isVowel(char c) {
  return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}

int main() {
  optimize();
  string s;
  cin >> s;
  string ans;
  for(auto u : s) {
    char c = tolower(u);
    if(isVowel(c)==0) {
      ans+='.';
      ans+=c;
    }
  }
  cout << ans << endl;
  return 0;
}
