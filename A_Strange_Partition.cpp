#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        long long mini = 0;
        long long maxi = 0;

        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;

            mini += a;
            maxi += (a + x - 1) / x;
        }

        mini = (mini + x - 1) / x;

        cout << mini << " " << maxi << '\n';
    }

    return 0;
}