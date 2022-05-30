#include<iostream>

using namespace std;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  string s1;
  cin>>s1;
  int i, sum=0;
  for(i=0; i<s1.size(); i++)
  {
    if(s1[i]=='1')sum+=a;
    else if(s1[i]=='2')sum+=b;
    else if(s1[i]=='3')sum+=c;
    else if(s1[i]=='4')sum+=d;
  }
  cout<<sum<<endl;
  return 0;
}
