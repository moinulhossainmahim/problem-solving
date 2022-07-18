
/* 
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int findFrequency(vector<int> v, int x){
    map<long long, int> s;
    for(auto u : v) s[u]++;
    return s[x];
}

int main() {
  return 0;
}
