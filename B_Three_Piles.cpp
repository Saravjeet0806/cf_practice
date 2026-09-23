#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int a, b, c;
       cin>>a>>b>>c;
       int ans = abs(a-b);
       ans = max(ans, abs((a+c)-b));
       if(a>b)
       ans = max(ans, abs((a)-(c+b)));

       cout<<ans<<'\n';
    }
    return 0;
}