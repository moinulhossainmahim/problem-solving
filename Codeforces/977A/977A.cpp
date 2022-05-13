#include<iostream>

using namespace std;

int main() {
  long int n;
  int i = 0,k;
  cin>>n>>k;
  while(i<k) {
    if(n%10 == 0) {
      n = n/10;
    } else {
      n = n - 1;
    }
    i++;
  }
  cout<<n<<endl;
  return 0;
}