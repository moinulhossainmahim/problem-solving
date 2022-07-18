/* 
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel(char c) {
  return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
  optimize();
  int arr[] = {5, 7, 5};
  vector<string> v;
  for(int i=0; i<3; i++) {
    string s;
    char c;
    cin >> c;
    getline(cin, s);
    s=c+s;
    v.push_back(s);
  }
  for(int i=0; i<3; i++) {
    int count=0;
    for(auto u : v[i]) {
      if(isVowel(u)) count++;
    }
    if(count!=arr[i]) return cout << "NO" << endl, 0;
  }
  cout << "YES" << endl;
  return 0;
}
