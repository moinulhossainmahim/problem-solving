#include<bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  string s;
  s=to_string(n);
  map<char, int> freq;
  for(int i=0; i<s.size(); i++) {
    freq[s[i]]++;
  }
  for(auto u : freq) cout << u.first << " " << u.second << endl;
}
