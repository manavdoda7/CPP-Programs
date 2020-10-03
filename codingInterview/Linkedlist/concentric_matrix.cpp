#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int A;
cin>>A;

     vector<vector<int>>v;
   
   int t= 0,b=v.size()-1,l=0,r=v[0].size()-1;
   int dir=0;
   while(t<=b and l<=r){
       
    if(dir==0){
        
        
        for(int i=l ;i<=r;i++){
            
            v[t][i]=A;
        }
        t++; dir=1;
    }
    
    if(dir==1){
        
        for(int i=t;i<=b;i++){
            v[i][r]=A;
        }
        r--;
        dir=2;
        
    }
    
    if(dir==2){
        
        for(int i=r;i>=l;i++){
            v[b][i]=A;
        }
        b--;dir=3;

    }
    
    if(dir==3){
        
        for(int i=b;i>=t;i++){
            
            v[i][l]=A;
        }
        l++;
        dir=0;
    }
    A--;
   }

   for(int i=0;i<v.size();i++){

       for(int j=0;j<v[0].size();j++){


           cout<<v[i][j]<<"\t";
       }
       cout<<"\n";
   }



}