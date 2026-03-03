#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);

        for (int i=0; i<n; i++){
            cin>>a[i];
        }

        map<long long,long long>mpp;

        for(auto i : a){
          mpp[i]++;
        }
        long long highest_freq=0;
        for(auto i : mpp){
            highest_freq=max(highest_freq, i.second);
        }

        long long to_replace=n-highest_freq;

        long long ops=0;
        while(highest_freq<n){
            ops+=1;
            highest_freq=highest_freq*2;
        }

        cout<<to_replace+ops<<'\n';
        
    }
    return 0;
}