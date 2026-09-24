#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;
    long long half = n/2;
    if(n%2==1){
        half=n/2+1;
    }
    long long ans = 0;
    if(k<=half){
        ans = 2*(k-1)+1;
        cout<<ans<<'\n';
    }
    else{
        long long pos = k-half;
        ans = 2*(pos-1)+2;
        cout<<ans<<'\n';
    }
    return 0;
}