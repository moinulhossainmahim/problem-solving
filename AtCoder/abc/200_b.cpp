#include <iostream>
using namespace std;

int main() {
  long long k, n;
  cin >> n >> k;

  string temp = to_string(n);
  while (k--) {
    long long t = stoll(temp);
    if ((t % 200) == 0) {
      t = t / 200;
      temp = to_string(t);
    } else {
      temp += "200";
    }
  }
  cout << stoll(temp) << endl;
}
