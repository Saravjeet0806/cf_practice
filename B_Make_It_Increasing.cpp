#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >= a[i + 1])
            {
                a[i] = a[i] / 2;
                ans++;
                if (a[i] == 0)
                {
                    break;
                }
            }
            if (a[i] == 0 && a[i + 1] == 0)
            {
                ans = -1;
                break;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}