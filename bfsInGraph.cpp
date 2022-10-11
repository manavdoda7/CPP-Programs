#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		vector<int> bfsOfGraph(int V, vector<int> adj[]) {
			vector<int> bfs;
			bool vis[V+1]={0};
			for(int i=1; i<=V; i++) {
				if(!vis[i]) {
					queue<int> q;
					q.push(i);
					vis[i]=1;
					while(!q.empty()) {
						int node=q.front(); q.pop();
						bfs.push_back(node);
						for(auto it:adj[node]) {
							if(!vis[it]) {
								q.push(it);
								vis[it]=1;
							}
						}
					}
				}
			}
			return bfs;
		}	
};

void addEdge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void printAns(vector<int> &ans) {
	for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
}

int main() {
	int V; cin>>V;
	vector<int> adj[V+1];
	int e; cin>>e;
	for(int i=0; i<e; i++) {
		int u,v; cin>>u>>v;
		addEdge(adj,u,v);
	}
	Solution obj;
	vector<int> ans=obj.bfsOfGraph(V,adj);
	printAns(ans);
	return 0;
}
