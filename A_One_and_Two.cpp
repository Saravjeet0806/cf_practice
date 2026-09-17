#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int twos = 0;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 2)
            {
                twos++;
            }
            else
            {
                ones++;
            }
        }

        if(twos%2==1){
            cout<<-1<<'\n';
        }
        else{
            if(twos==0){
                cout<<1<<'\n';
            }
            else{
                int ans=0;
                int val = twos/2;
                for(int i = 0; i<n; i++){
                    if(val==0){
                        break;
                    }
                    if(a[i]==2 && val!=0)
                    {
                        ans = i+1;
                        val--;
                    }
                }
                cout<<ans<<'\n';

            }
        }
    }
    return 0;
}