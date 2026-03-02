#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;

        unordered_map<char, int>mpp;
        for(int i=0; i<t.length(); i++){
            char ch = t[i];
            mpp[ch]++;
        }

        for(int i=s.length(); i>=0; i--){
            char ch = s[i];
            if(mpp[ch]>=1){
                mpp[ch]--;
            }
            else{
                s[i]='.';
            }

        }
        string ans;
        for(int i=0; i<s.length(); i++){
            if(s[i]!='.'){
                ans+=s[i];
            }
        }
        if(ans==t){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}