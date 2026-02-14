#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long n, k;
       cin>>n>>k;

       vector<int>a(n);

       for(int i=0; i<n; i++){
        cin>>a[i];
       }

       sort(a.begin(), a.end());
       int length=1;
       int maxlen=1;

       for(int i=1; i<n; i++){
          if(a[i]-a[i-1]<=k){
            length++;
          }
          else{
            length=1;
          }
          maxlen=max(maxlen, length);
       }
       cout<<n-maxlen<<endl;
    }

    return 0;
}