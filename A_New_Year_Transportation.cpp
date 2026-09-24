#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    int n, t;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int sum = 0;

    while(sum<t-1){
        sum+=a[sum];
    }
    if(sum==t-1){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
    return 0;
}