#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u' || ch=='Y' || ch=='y');
}
int main()
{

    string s;
    cin >> s;
    string a;
    for (auto ch : s)
    {
        if (!isVowel(ch))
        {
            a.push_back('.');
            a.push_back(tolower(ch));
        }
    }
    cout << a;

    return 0;
}