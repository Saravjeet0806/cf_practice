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
     stack<char>st;
     int ops = 0;
     for(char ch : s){
        if(ch=='('){
            st.push(ch);
        }
        else if(ch==')' && !st.empty()){
            st.pop();
        }
        else{
            ops++;
        }
     }  
     cout<<ops<<'\n';
    }
    return 0;
}