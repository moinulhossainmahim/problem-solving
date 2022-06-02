#include<iostream>

using namespace std;

int main() {
  int n, i, d=0, a=0;
  cin>>n;
  char s[n];
  for(i=0; i<n; i++) {
    cin>>s[i];
    if(s[i]=='D') d++;
    else a++;
  }
  if(d>a) cout<<"Danik"<<endl;
  else if(d<a) cout<<"Anton"<<endl;
  else cout<<"Friendship"<<endl;
  return 0;
}
