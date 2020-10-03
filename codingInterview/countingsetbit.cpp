#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int res=0;
    int n;
    cin>>n;

    while(n){

n= (n&(n-1));
res++;

    }
    cout<<res;
    return res;
}