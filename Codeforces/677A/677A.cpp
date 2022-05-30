#include<iostream>

using namespace std;

int main() {
  int n, l;
  int i, result=0;
  cin>>n>>l;
  while(n--) {
    int a;
    cin>>a;
    if(a<=l) result+=1;
    else result+=2;
  }
  cout<<result<<endl;
  return 0;
}
