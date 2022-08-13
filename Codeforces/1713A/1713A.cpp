#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		int a=0,b=0,c=0,d=0;
		for(int i=0; i<n; i++) {
			int x,y;
			cin >> x >> y;
			if(x==0 && y>0) a = max(a, (y*2));
			else if(x==0 && y<0) b=max(b, (abs(y) * 2));
			else if(y==0 && x>0) c = max(c, (x*2));
			else d=max(d, (abs(x) * 2));
		}
		cout << a + b + c + d << endl;
	}
}
