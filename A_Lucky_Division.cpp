#include <bits/stdc++.h>
using namespace std;

bool islucky(int n)
{
    int temp = n;
    while (temp != 0)
    {
        if (temp % 10 != 4 && temp % 10 != 7)
        {
            return false;
        }
        temp = temp / 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (islucky(i) && n % i == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}