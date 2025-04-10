#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
        }

        int sum1 = 0;
        int sum2 = 0;

        sort(a, a+n);

        if(k>n-k)
        {
            for(int i = n-k; i<n; i++)
            {
                sum2 += a[i];
            }
            for(int i = 0; i<n-k; i++)
            {
                sum1 += a[i];
            }
        }
        else
        {
            for(int i = k; i<n; i++)
            {
                sum2 += a[i];
            }
            for(int i = 0; i<k; i++)
            {
                sum1 += a[i];
            }
        }
        cout<<sum2-sum1<<endl;
    }
}