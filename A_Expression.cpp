#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    int maxi =INT_MIN;
    int sum =0;

    sum = a+b+c;
    maxi=max(maxi, sum);

    sum = a*(b+c);
    maxi=max(maxi, sum);

    sum = (a+b)*c;
    maxi=max(maxi, sum);

    sum = a*b*c;
    maxi=max(maxi, sum);

    cout<<maxi<<'\n';

    return 0;
}