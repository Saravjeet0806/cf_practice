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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxLen = INT_MIN;
        int length = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                length = 0;
            }
            else
            {
                length++;
                maxLen = max(maxLen, length);
            }
        }
        if (maxLen == INT_MIN)
            cout << 0 << endl;
        else
        {
            cout << maxLen << endl;
        }
    }
    return 0;
}