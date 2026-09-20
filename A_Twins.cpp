#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a, a+n);

    int ans = 0;
    int tsum = 0;
    for(int i = n-1; i>=0; i--){
         if(tsum>(sum-tsum)){
            break;
         }
         ans++;
         tsum+=a[i];
    }

    cout<<ans<<'\n';

    
    return 0;
}