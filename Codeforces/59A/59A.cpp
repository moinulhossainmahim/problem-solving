#include<iostream>

using namespace std;

int main() {
  string s1;
  cin>>s1;
  int size=s1.size();
  int l=0,u=0,i;
  for(i=0; i<size; i++) {
    if(isupper(s1[i])) {
      u++;
    } else {
      l++;
    }
  }
  if(u>l) {
    for(i=0; i<size; i++) {
      s1[i]=toupper(s1[i]);
    }
  } else {
    for(i=0; i<size; i++) {
      s1[i]=tolower(s1[i]);
    }
  }
  cout<<s1<<endl;
  return 0;
}
