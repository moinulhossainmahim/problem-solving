/* 
  IN THE NAME OF ALLAH
  Author: Moinul Hossain
  Northern University Bangladesh
*/

#include <bits/stdc++.h>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
  optimize();
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(next_permutation(s.begin(), s.end())) cout<< s << endl;
		else cout << "no answer" << endl;
 
	}
	return 0;
}
