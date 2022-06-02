#include<iostream>

using namespace std;

int main() {
  int n,i;
  int maxValue=0, minValue=65536;
  int maxIndex=0,minIndex=0;
  cin>>n;
  for(i=1; i<=n; i++) {
    int a;
    cin>>a;
    if(a<=minValue) {
      minValue=a;
      minIndex=i;
    }
    if(a>maxValue) {
      maxValue=a;
      maxIndex=i;
    }
  }
  if(maxIndex>minIndex) {
    cout<<(maxIndex-1)+(n-minIndex)-1<<endl;
  } else {
    cout<<(maxIndex-1)+(n-minIndex)<<endl;
  }
  return 0;
}
