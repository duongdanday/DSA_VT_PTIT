#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> a(n+1);
        for(int i = 1; i <= m; i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
        }

        for(int i = 1; i <= n; i++){
            cout<<i<<": ";
            for(int x : a[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}