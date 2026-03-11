#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin>>q;

    for(int i=0; i<q; ++i){
        int x; 
        cin>>x;
        int y = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout<<y<<'\n';
    }

    return 0;
}