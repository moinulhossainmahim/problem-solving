#include <bits/stdc++.h>

using namespace std;

int main() {
  int i = 0;
  int numbers[4];
  for (i = 0; i < 4; i++) {
    cin >> numbers[i];
  }
  sort(numbers, numbers + 4);
  cout << numbers[3] - numbers[0] << " ";
  cout << numbers[3] - numbers[1] << " ";
  cout << numbers[3] - numbers[2] << endl;
  return 0;
}
