#include<bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
int truoc[1001];

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true; 
                truoc[x] = v;
            }
        }
    }
}

void path(int s, int t){
    memset(visited, false, sizeof(visited));
    memset(truoc, 0, sizeof(truoc));
    bfs(s);
    if(!visited[t]){
        cout<<"-1";
    }
    else{
        vector<int>path;
        while(t != s){
            path.push_back(t);
            t = truoc[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());

        for(int x : path){
            cout<<x<<' ';
        }
        cout<<endl;
    }
}
int main(){
    int k;
    cin>>k;
    while(k--){
        cin>>n>>m>>s>>t;

        for(int i = 0; i < m; i++){
            int x, y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        path(s, t);
    }
}
