#include<bits/stdc++.h>

using namespace std;

int main() {
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int totalDrinksToasts=(k*l)/nl;
  int limeToast=c*d;
  int saltToasts=p/np;
  int toasts=min(min(totalDrinksToasts, limeToast), saltToasts)/n;
  cout<<toasts<<endl;
  return 0;
}
