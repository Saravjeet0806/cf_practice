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
       int mini = n;
       for(int i = 0; i<3; i++){
        int a;
        cin>>a;
            mini = min(mini, a);
        
       }
       cout<<n-mini<<'\n';
    }
    return 0;
}