#include<iostream>

using namespace std;

int main() {
  int count=0, i, n;
  cin>>n;
  char prev;
  cin>>prev;
  char curr;
  for(i=0; i<n-1; i++) {
    cin>>curr;
    if(prev==curr) {
      count++;
      prev=curr;
    } else {
      prev=curr;
    }
  }
  cout<<count<<endl;
  return 0;
}
