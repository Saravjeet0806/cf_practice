#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {long long n;
		cin >> n; // Read the size of the array for the current test case
		long long a[n];
		for (int i = 0; i < n; i++) // Read the array elements
			cin >> a[i];

		int count_of_zero = 0; // Initialize a counter for zeros in the array

		// Count the number of zeros in the array
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 0)
				count_of_zero++;
		}

		bool flag=false;

        int l=0, r=n-1;
        while(a[l]==0){
            l++;
        }
        while(a[r]==0){
            r--;
        }
        for(int i=l; i<=r; i++){
            if(a[i]==0){
                flag=true;
            }
        }
        if(count_of_zero==n){
            cout<<0<<endl;
        }
        else if(flag==false){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}