#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int k;
    cin>>k;

    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int ops = INT_MAX;
    int even_count=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even_count++;
        }
        if(a[i]%k==0){
            ops=0;
            break;
        }
        else{
            int add = k-a[i]%k;
            ops = min(ops, add);
        }
    }

    if(k==4){
        if(even_count>=2){
            ops = min(ops, 0);
        }
        else if(even_count==0){
            ops = min(ops, 2);
        }
        else if(even_count==1){
            ops = min(ops, 1);
        }
    }

    cout<<ops<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}