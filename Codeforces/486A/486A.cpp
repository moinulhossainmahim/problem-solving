#include<iostream>

using namespace std;

int main() {
  long long int n, result;
  cin>>n;
  if(n%2 == 0) result = n/2;
  else result = ((n+1)/2) * (-1);
  cout<<result<<endl;
  return 0;
}
