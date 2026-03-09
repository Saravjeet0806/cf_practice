#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, c1=0, c2=0, c3=0, c4=0;

    for(int i=0;i<n;i++){
        cin >> a;
        if(a==1) c1++;
        else if(a==2) c2++;
        else if(a==3) c3++;
        else c4++;
    }
    int ans = c4;
    ans+=c3;
    c1=max(0, c1-c3);

    ans+=c2/2;
    c2%=2;

    if(c2){
        ans++;
        c1=max(0, c1-2);
    }

    ans+=(c1+3)/4; //CEILING DIVISION

    cout<<ans<<'\n';
    return 0;
}