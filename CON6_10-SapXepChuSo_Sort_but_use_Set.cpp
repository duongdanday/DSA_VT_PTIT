#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        set <int> se;
        int num;
        for(int i = 0; i<n; i++){
            while(a[i]>0){
                num = a[i]%10;
                se.insert(num);
                a[i] /= 10;
            }
        }
        for(int x : se){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
}