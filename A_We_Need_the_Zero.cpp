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

       long long total_xor=0;

       for(auto i : a){
        total_xor^=i;
       }

       if(n%2==1){
        cout<<total_xor<<'\n';
       }
       else{
        if(total_xor==0){
            cout<<total_xor<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
       }
    }
    return 0;
}