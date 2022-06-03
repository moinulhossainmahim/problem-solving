#include<bits/stdc++.h>

using namespace std;

int main() {
  int n,m,flag=0;
  cin>>n>>m;
  char color[n][m];
  int row;
  int col;
  for(row=0; row<n; row++) {
    for(col=0; col<m; col++) {
      cin>>color[row][col];
      if(color[row][col]=='C'||color[row][col]=='M'||color[row][col]=='Y'){
        flag=1;
        continue;
      }
    }
  }
  if(flag==1) cout<<"#Color"<<endl;
  else cout<<"#Black&White"<<endl;
  return 0;
}
