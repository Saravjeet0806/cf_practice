#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string>a(n);
    unordered_map<string, int>mpp;
    string ans;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        mpp[s]++;
    }

    for(auto i : mpp){
        if(i.second>n/2){
            ans =i.first;
        }
    }

    cout<<ans<<'\n';

    return 0;
}