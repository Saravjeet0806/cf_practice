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

       int length=0;
       int maxLen=0;
       int flag=0;

       for(char ch : s){
          if(ch=='<' && flag==0){  //tracking consecutive < or >
            length++;
          }
          else if(ch=='<' && flag==1){
            length=1;
            flag=0;
          }
          else if(ch=='>' && flag==1){
            length++;
          }
          else{
            length=1;
            flag=1;
          }
          maxLen=max(length, maxLen);
          
       }
       cout<<maxLen+1<<endl;
    }
    return 0;
}