#include<iostream>
#include<bits/stdc++.h>

#define ll long long

using namespace std;


void create(vector<int>& a,int u,int v){
a[u].push_back(v);
a[v].push_back(u);

}

void route()



int main(){
ll n;
cin>>n;

vector<int>*a= new vector<int>[n];
int u,v;

for(int i=0;i<n;i++){
cin>>u>>v;
create(a,u,v);
}

bool visited=false;


for(int i=0;i<n;i++){


    
}
route(a,u,v,visited);
return 0;


}