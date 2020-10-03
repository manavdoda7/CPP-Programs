#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binary_search(vector<int>&arr,int x){



    int l= 0;
    int r= arr.size()-1;

    while(l<r){


        int mid= l+(r-l)/2;

        if(arr[mid]== x){
            return mid;5
        }
        else if(arr[mid]>x){

            r= mid-1;
        }
        else if(arr[mid]<x) {
            l= mid+1;
        }
    }
    return -1;
}


int main(){


int n;
cin>>n;
    vector<int>arr(n);
int  c;
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
cout<<"\n insert x ";
    int x;
    cin >>x;
   c= binary_search(arr,x);
cout<<c;
return 0;
}