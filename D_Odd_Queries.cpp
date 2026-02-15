#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        long long sum = 0;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        vector<long long> pref(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long segment_sum = pref[r] - pref[l - 1];
            long long to_add = (r - l + 1) * k;
            long long new_sum = sum - segment_sum + to_add;
            if (new_sum % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}