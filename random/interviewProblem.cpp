#include<iostream>

using namespace std;

int main() {
  int n,i,a=0,b=0,l=0,o=0,nn=0,count=0;
  string s1;
  cout<<"Enter size of the string"<<endl;
  cin>>n;
  cout<<"Enter the string"<<endl;
  cin>>s1;
  for(i=0; i<n; i++) {
    if(s1[i]=='A')a++;
    else if(s1[i]=='B')b++;
    else if(s1[i]=='L')l++;
    else if(s1[i]=='O')o++;
    else if(s1[i]=='N')nn++;
  }
  while(a>=1 && b>=1 && l>=2 && o>=2 && nn>=1) {
    count++;
    a--;
    b--;
    nn--;
    l-=2;
    o-=2;
  }
  cout<<count<<endl;
  return 0;
}
