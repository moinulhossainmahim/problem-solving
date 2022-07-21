#include<bits/stdc++.h>

using namespace std;

int a,b,c,d,e,f;

int dp[10100];

int fibo(int n) {

  if (n == 0) return a;
  if (n == 1) return b;
  if (n == 2) return c;
  if (n == 3) return d;
  if (n == 4) return e;
  if (n == 5) return f;

  if(dp[n] != -1) return dp[n];

  return dp[n] = fibo(n-1) + fibo(n-2) + fibo(n-3) + fibo(n-4) + fibo(n-5) + fibo(n-6);
}

int main() {
  int t;
  cin >> t;
  for(int i=1; i<=t; i++) {
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    cout << "Case " << i << ": " << fibo(n) << endl;
  }
  return 0;
}
