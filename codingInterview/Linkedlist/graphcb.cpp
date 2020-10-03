#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph{
int V;

list<int>*adj;
public:
Graph(int v){
V=v;
adj= new list<int>[V];
}

void addEdge(int u,int v,bool bidr= true){


adj[u].push_back(v);
if(bidr){

    adj[v].push_back(u);
}


}
void printlist(){

    for(int i=0;i<V;i++){
cout<<i<<"->";
for(auto ele: adj[i]){

    cout<<ele<<"\n";

}

    }
}


};


int main(){

Graph g(4);

g.addEdge(0,4,false);
g.addEdge(1,4,false);
g.addEdge(0,2,false);
g.printlist();
return 0;





}