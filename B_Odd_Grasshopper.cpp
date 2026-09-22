#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tt;
    cin>>tt;
    while(tt--){
       ll x, n;
       cin>>x>>n;

       ll final_pos;
       if(n%4==1){
        final_pos=-n;
       }
       else if(n%4==2){
        final_pos = 1;
       }
       else if(n%4==3){
        final_pos=n+1;
       }
       else{
        final_pos=0;
       }

       if(x%2==0){
        final_pos=x+final_pos;
       }
       else{
        final_pos=x-final_pos;
       }
       cout<<final_pos<<'\n';    
    }   
}