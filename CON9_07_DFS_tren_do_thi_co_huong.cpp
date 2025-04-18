#include<bits/stdc++.h>
using namespace std;

int n,m,p;
vector<int> adj[1001];
bool visited[1001];

void inp(){
    cin>>n>>m>>p;

    for(int i = 0; i < m; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u){
    cout<<u<<" ";
    visited[u] = true;

    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
int main(){
    int t; 
    cin>>t;
    while(t--){
        inp();
        dfs(p);
    }
}