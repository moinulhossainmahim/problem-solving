#include<iostream>
using namespace std;

int main() {
  int n, i;
  cin>>n;
  for(i=0; i<n; i++) {
    if(i%2 == 0) {
      cout<<"I hate ";
    } else {
      cout<<"I love ";
    }
    if(i == n-1) {
      cout<<"it";
    } else {
      cout<<"that ";
    }
  }
  cout << endl;
  return 0;
}
