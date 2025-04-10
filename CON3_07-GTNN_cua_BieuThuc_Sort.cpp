#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n], b[n];
        for (int i = 0; i<n; i++){
            cin>> a[i];
        }
        for (int i = 0; i<n; i++){
            cin>> b[i];
        }
        long long sum = 0;
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        
        for(int i = 0; i<n; i++){
            sum += a[i]*b[i];
        }
        cout<<sum<<'\n';
    }
}