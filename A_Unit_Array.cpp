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
        int neg=0;
        int pos=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<0){
                neg++;
            }
            else{
                pos++;
            }
        }

        int ops=0;

        while(neg>pos || neg%2==1){
           neg--;
           pos++;
           ops++;
        }

        cout<<ops<<endl;

    }
    return 0;
}