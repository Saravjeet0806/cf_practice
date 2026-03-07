#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == tolower(s[i]))
        {
            cnt++;
        }
    }

    if (cnt == 0)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << '\n';
    }
    else if (cnt == 1 && s[0] == tolower(s[0]))
    {
        s[0] = toupper(s[0]);

        for (int i = 1; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }

        cout << s << '\n';
    }
    else
    {
        cout << s << '\n';
    }

    return 0;
}