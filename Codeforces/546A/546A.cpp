#include<iostream>

using namespace std;

int main() {
  int k,n,w,i,total=0;
  cin>>k>>n>>w;
  for(i=1; i<=w; i++) {
    total+=(i*k);
  }
  if(total>n) {
    cout<<total-n<<endl;
  } else {
    cout<<0<<endl;
  }
  return 0;
}
