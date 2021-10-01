#include<bits/stdc++.h>
using namespace std;

void helper(int source, bool visited[], vector<int> adj[]);

void dfs(vector<int> adj[], int n){

    bool visited[n];
    memset(visited,false,sizeof visited);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            helper(i,visited,adj);
        }
    }
}

void helper(int source, bool visited[], vector<int> adj[]){
    visited[source] = true;
    cout<<source<<" ";
    for(auto s: adj[source]){
        if(!visited[s]){
            helper(s,visited,adj);
        }
    }
}

int main(){
    int n,m; cin>>n>>m;
    vector<int> adj[n];
    
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(adj,n);
}

