#include<iostream>
#include<string>

using namespace std;

int main() {
  string s1;
  int i, n;
  cin>>n;
  for(i=0; i<n; i++) {
    cin>>s1;
    if(s1.size()>10) {
      s1=s1[0]+to_string(s1.size()-2)+s1[s1.size()-1];
    }
    cout<<s1<<endl;
  }
  return 0;
}