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

        if (n%2==1 || n<4)
        {
            cout << -1 << '\n';
        }

        else{
            long long mini = (n+5)/6; //ceil of (n/6)
            long long maxi = n/4;
            cout<<mini<<" "<<maxi<<" "<<'\n';
        }
    }
    return 0;
}