#include<iostream>
#include<string>

using namespace std;

int main() {
  string s1;
  string s2;
  string r;
  int i;
  cin>>s1>>s2;
  for(i=0; i<s1.size(); i++) {
    if(s1[i]!=s2[i]) {
      r=r+to_string(1);
    } else {
      r=r+to_string(0);
    }
  }
  cout<<r<<endl;
  return 0;
}
