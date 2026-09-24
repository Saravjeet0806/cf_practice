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

       int three=0;
       int twos = 0;
       while(n>0 && n%3==0){
        n/=3;
        three++;
       }
       while(n>0 && n%2==0){
        n/=2;
        twos++;
       }

       if(n>1 || three<twos){
        cout<<-1<<'\n';
       }
       else{
        cout<<three + (three-twos)<<'\n';
       }
  
    }
    return 0;
}