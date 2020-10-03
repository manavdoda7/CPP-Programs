#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int m;
cin>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++){

        cin>>v[i];
    }
    int n=v[0];

    for(int i=1;i<v.size();i++){

        n^=v[i];
    }
    cout<<"ans"<<n;
}