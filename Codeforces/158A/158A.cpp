#include<iostream>

using namespace std;

int main() {
  int n,k,i;
  int scores[100];
  int count = 0;
  cin >> n >> k;
  for(i=0; i<n; i++){
    cin >> scores[i];
  }
  for(i=0; i<n; i++){
    if(scores[i] >= scores[k-1] && scores[i] > 0) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
