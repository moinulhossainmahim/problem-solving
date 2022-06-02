#include<iostream>

using namespace std;

int main() {
  int a,b,temp;
  cin>>a>>b;
  if(a>b) {
    cout<<b<<" ";
    temp=(a-b)/2;
    cout<<temp<<endl;
  } else {
    cout<<a<<" ";
    temp=(b-a)/2;
    cout<<temp<<endl;
  }
  return 0;
}
