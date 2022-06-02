#include<iostream>

using namespace std;

int main() {
  string s1;
  cin>>s1;
  int i;
  if(s1[0]>=97) {
    s1[0]=s1[0]-32;
  }
  cout<<s1<<endl;
  return 0;
}
