#include<bits/stdc++.h>

using namespace std;

string maximumFrequency(string s){
        // Complete the function
  string temp;
  vector<string> v;
  for(auto u : s) {
      if(isspace(u)) {
          v.push_back(temp);
          temp.clear();
      }
      else
      temp+=u;
  }
  
  v.push_back(temp);
  map<string, int> m;
  
  int mxFrq=0;
  for(auto u : v) {
      m[u]++;
      mxFrq=max(mxFrq, m[u]);
  }
  string ans;
  for(auto u : v) {
      if(mxFrq==m[u]) {
          ans=u;
          break;
      }
  }
  string r=" "+to_string(mxFrq);
  ans+=r;
  return ans;
}

int main() {

    return 0;
}

