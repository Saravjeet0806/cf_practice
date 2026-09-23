#include <bits/stdc++.h>
using namespace std;

int solve(string n, string i){
    int ops = 0;

    int checkIdx = 1;
    int sz = n.size();
    for(int j=sz-1; j>=0; j--){
        if(n[j]==i[checkIdx]){
            checkIdx--;
        }
        else if(checkIdx<0){
            break;
        }
        else
            ops++;
    }
    if(checkIdx>0){
        ops=INT_MAX;
    }
    return ops;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string n;
       cin>>n;

       vector<string>a = {"00", "25", "50", "75"};
        
       int ans = INT_MAX;
       for(auto i : a){
        ans = min(ans, solve(n, i));
       }
       cout<<ans<<'\n';
    }
    return 0;
}