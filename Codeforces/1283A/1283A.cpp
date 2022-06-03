#include<iostream>

using namespace std;

int main() {
  int n,h,m,time,hourToTime;
  cin>>n;
  while(n--) {
    cin>>h>>m;
    hourToTime=(23-h)*60;
    time=60-m;
    cout<<hourToTime+time<<endl;
  }
  return 0;
}
