#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  long long int a[4];
  int count=0, i,j;
  for(i=0; i<4; i++) cin>>a[i];
  sort(a, a+4);
  for(i=0; i<3; i++) {
    if(a[i]==a[i+1]) count++;
  }
  cout<<count<<endl;
  return 0;
}
