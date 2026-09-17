#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i = 0; i<n; i++){
        cin>>a[i];
       }

       sort(a.begin(), a.end());
       int mini =a[0];
       int maxi = a[n-1];

       if(mini == maxi){
        cout<<"NO"<<'\n';
       }
       else{
        cout<<"YES"<<'\n';
        cout<<maxi<<" ";
        for(int i = 0; i<n-1; i++){
            cout<<a[i]<<" ";
        }
        cout<<'\n';
       }
    }
    return 0;
}