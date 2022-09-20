#include <iostream>

using namespace std;

int main() {
  int n;
  bool isEasy = true;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == 1) {
      isEasy = false;
    }
  }
  if (isEasy) {
    cout << "EASY" << endl;
  } else {
    cout << "HARD" << endl;
  }
  return 0;
}
