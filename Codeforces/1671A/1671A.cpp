#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        ll A = 0, B = 0, i;
        bool no = false;
        for(i = 0; i < a.size(); i++){
            if(a[i] == 'a') A++;
            if(a[i] == 'b') B++;
            if(a[i] == 'b' && A > 0){
                if(A == 1){
                    no = true;
                    break;
                }
                A = 0;
            }
            if(a[i] == 'a' && B > 0){
                if(B == 1){
                    no = true;
                    break;
                }
                B = 0;
            }
            if(i == a.size()-1){
                if(A == 1 || B == 1){
                    no = true;
                    break;
                }
            }
        }
 
        if(no) cout<<"NO";
        else cout<<"YES";
 
        cout<<endl;
    }
}