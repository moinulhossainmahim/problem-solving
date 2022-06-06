#include<iostream>

using namespace std;

int main() {
  int yy,a,b,c,d;
  cin>>yy;
  while(1) {
    yy++;
    a=yy/1000;
    b=(yy/100) % 10;
    c=(yy/10) % 10;
    d=yy%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
      break;
    }
  }
  cout<<yy<<endl;
  return 0;
}
