#include<stdio.h>

int main() {
  int n, a, b;
  int count = 0;
  scanf("%d\n", &n);
  for(int i=0; i<n; i++) {
    scanf("%d%d", &a, &b);
    if((b-a) >= 2) {
      count++;
    }
  }
  
  printf("%d\n", count);
  return 0;
}
