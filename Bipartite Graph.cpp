//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> group(V, -1);
	    for(int i=0;i<V;i++) if(group[i]==-1) {
	        queue<int> q;
    	    q.push(i);
    	    q.push(-1);
    	    bool gr = 0;
    	    while(q.front()!=-1) {
    	        while(q.front()!=-1) {
    	            int top = q.front();
    	            q.pop();
    	            if(group[top]!=gr && group[top]!=-1) return 0;
    	            if(group[top]==-1) {
    	                for(int i=0;i<adj[top].size();i++) q.push(adj[top][i]);
    	                group[top]=gr;
    	            }
    	        }
    	        gr = !gr;
    	        q.pop();
    	        q.push(-1);
    	    }
	    }
	    return 1;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends
