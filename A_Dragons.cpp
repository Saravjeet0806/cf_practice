#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;
    int flag=0;
    vector<pair<int, int>>dragons;
    
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }

    sort(dragons.begin(), dragons.end());

    for(int i=0; i<n; i++){
        if(s>dragons[i].first){
            s+=dragons[i].second; //add bonus
        }
        else{
            flag=1;
        }
    }
    if(flag){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<"\n";
    }
    return 0;
}