#include<bits/stdc++.h>
using namespace std;

int n, m, q, x, y;
vector<int> adj[1001];
bool visited[1001];
int truoc[1001];

void inp(){
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void dfs(int u){
   
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            truoc[v] = u;
            dfs(v);
        }
    }
}

void path(int s, int t){
    memset(visited, false, sizeof(visited));
    memset(truoc, 0, sizeof(truoc));

    dfs(s);
    if(!visited[t]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        inp();
        cin>>q;
        while(q--){
            cin>>x>>y;
            path(x,y);
        }
    }
}