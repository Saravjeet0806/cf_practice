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
        string s;
        cin >> s;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            z += (s[i] == '0');
        }
        if (s[0] == '1')
        {
            cout << z << '\n';
        }
        else
        {
            int o = 0;
            int ans = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                o += (s[i] == '1');
                z -= (s[i] == '0');
                ans = min(ans, o + z);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}