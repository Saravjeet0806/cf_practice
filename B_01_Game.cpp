#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       string s;
       int ones = 0;
       int zero = 0;
       cin>>s;

       for(char ch : s){
        if(ch=='0'){
            zero++;
        }
        else{
            ones++;
        }
       }

       bool flag = true;
       while(ones>=1 && zero>=1){
          ones--;
          zero--;
          flag=!flag;
       }
       if(flag==true){
        cout<<"NET"<<'\n';
       }
       else{
        cout<<"DA"<<'\n';
       }
    }
    return 0;
}