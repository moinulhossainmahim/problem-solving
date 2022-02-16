#include<iostream>
using namespace std;

int main() {
  int x;
  int count = 0;
  cin>>x;
  while(x) {
    if(x == 1 || x == 2 || x == 3 || x == 4 || x == 5){
      count += 1;
      cout << count << endl;
      return 0;
    }
    x = x - 5;
    count++;
  }
  return 0;
}