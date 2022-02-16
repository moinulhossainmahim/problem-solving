#include<iostream>
using namespace std;
int main() {
  int a,b,c;
  int count = 0;
  cin>>a;
  for(int i=0; i<a; i++) {
    cin>>b>>c;
    if((c-b) >= 2) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}