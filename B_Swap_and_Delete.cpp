#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
typedef long long ll;

void solve() {
    string s;
    cin>>s;
    int o=0;
    int z=0;
    int n = s.length();
    for(char ch : s){
        if(ch=='0'){
            z++;
        }
        else{
            o++;
        }
    }

    if(z==o){
        cout<<0<<'\n';
    }
    else{
        int t = 0;
        for(char ch : s){
            if(ch=='1' && z>0){
                z--;
                t++;
            }
            else if(ch=='0' && o>0){
                o--;
                t++;
            }
            else{
                break;
            }
        }
        cout<<n-t<<'\n';
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}