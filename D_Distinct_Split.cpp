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
       string s;
       cin>>s;
      
       vector<int>pref(n);
       vector<int>suff(n);
       
       unordered_set<char>st;
       st.insert(s[0]);
       pref[0] = 1;
       for(int i = 0; i<n; i++){
         st.insert(s[i]);
         pref[i] = st.size();
       }
       st.clear();
       st.insert(s[n-1]);
       suff[n-1] = 1;
       for(int i = n-1; i>=0; i--){
          st.insert(s[i]);
         suff[i] = st.size();
       }

       int ans = INT_MIN;

       for(int i = 0; i<n-1; i++){
         int sum = pref[i]+suff[i+1];
         ans = max(ans, sum);
       }
     
       cout<<ans<<'\n';
    }
    return 0;
}