#include<bits/stdc++.h>
using namespace std;
vector<int> Topological_sort(vector<int> adj[],int indegree[], int vertices)
{
    vector <int> ans;
    int count = 0;
    queue <int> q;
    for(int i=0;i<vertices;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int curr = q.front();
        count++;
        ans.push_back(curr);
        q.pop();
        for(auto s: adj[curr]){
                indegree[s]--;
                if(indegree[s]==0){
                    q.push(s);
                }
        }
    }
    vector<int> a;
    if(count!=vertices){
        return  a;
    }
    else{
        return ans;
    }
}
int main(){
    int vertices, edges; cin>>vertices>>edges;
    vector <int> adj[vertices];
    int a,b;
    for(int i=0;i<edges;i++){
        cin>>a>>b;
        adj[a].push_back(b);
    }
    int degree[vertices];
    for(int i=0;i<vertices;i++){
        degree[i] = false;
    }
    for(int i=0;i<vertices;i++){
        for(auto s: adj[i]){
            degree[s]++;
        }
    }
    vector<int> ans;
    ans = Topological_sort(adj, degree, vertices);
    for(auto s:ans){
        cout<<s<<" ";
    }cout<<endl;
    return 0;
}