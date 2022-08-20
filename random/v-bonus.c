#include <stdio.h>

int main() {
  long long n;
  printf("Enter your id: ");
  scanf("%lld", &n);
  int lastD = n % 10;
  int sum = 0;
  int j = 0;
  for (int i = 1; i <= lastD; i++) {
    j = (j * 10) + lastD;
    sum += j;
  }
  printf("%d\n", sum);
}
