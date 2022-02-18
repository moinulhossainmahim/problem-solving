#include<iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  int p = 0;
  int c = 0;
  for(int i=0; i<n; i++) {
    int a;
    cin>>a;
    if(a>0) {
      p += a;
    } else {
      if(p>0) {
        p--;
      } else {
        c++;
      }
    }
  }
  cout<<c<<endl;

  return 0;
}