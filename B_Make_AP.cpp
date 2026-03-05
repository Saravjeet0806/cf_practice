#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        bool flag = false;

        long long new_a = 2 *b -c;
        if (new_a / a > 0 && new_a % a == 0)
        {
            flag = true;
        }
        long long new_b = (a + c) / 2;
        if (new_b / b > 0 && new_b % b == 0 && (c - a) % 2 == 0)
        {
            flag = true;
        }
        
        long long new_c=2*b-a;
        if (new_c/c>0 && new_c%c==0){
            flag=true;
        }
        if(flag){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}