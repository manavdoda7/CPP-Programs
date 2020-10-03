#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int>v(n);

    int k;
    cin>>n;
    
    for(int i=0;i<n;i++){

        cin>>v[i];
    }
    cin>>k;


for(int i=0;i<n-1;i++){
    int count=v[i];

    for(int j=i+1;i<n;i++){
count= count^v[j];
if(i!=j){

    if(count<=k){
    cout<<"1"<<" ";
}
else{
    cout<<"0"<<" ";
}
}


    }
}
//     int i=0;
//     int j=i+1;
//     while(i<n and j<n){


//         if(i!=j){
// if(v[i]^v[j]<=k){

//     cout<<"1"<<" ";
// }
// else{

//     cout<<"0"<<" ";
// }    


//        j++;
        
//         if(j==n){
//             j=0;
//             i++;
//             j=i+1;
//         }
//         }

        
     
//     }
    return 0;
    
}