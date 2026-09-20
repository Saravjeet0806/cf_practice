#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tt; 
    cin>>tt;
    while(tt--){
        ll a, b;
        cin>>a>>b;
        
        if(a==b){
            cout<<0<<" "<<0<<'\n';
        }
        else if(a==b+1 || b==a+1){
            cout<<1<<" "<<0<<'\n';
        }
        else {
            ll a1 = abs(a-b);
            ll b1 = min(a, b)%a1;
            ll b2 = a1-min(a, b)%a1;

            cout<<a1<<" "<<min(b1, b2)<<'\n';
        }
    }
    
}