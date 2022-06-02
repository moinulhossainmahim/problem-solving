#include<iostream>

using namespace std;

int main() {
  int i,n, count=1;
  string s1;
  cin>>n;
  cin>>s1;
  string temp=s1;
  for(i=0; i<n-1; i++) {
    cin>>s1;
    if(temp!=s1) {
      count++;
      temp=s1;
    }
  }
  cout<<count<<endl;
  return 0;
}
