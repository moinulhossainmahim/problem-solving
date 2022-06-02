#include<iostream>

using namespace std;

int main() {
  int i,n,x=0;
  string s1;
  cin>>n;
  while(n--) {
    cin>>s1;
    if(s1[0]=='+' || s1[2]=='+')x++;
    else x--; 
  }
  cout<<x<<endl;
  return 0;
}
