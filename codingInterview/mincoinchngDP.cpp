#include <iostream>
#include<bits/stdc++.h>
#define li long int
using namespace std;

void change(li n,vector<li>& v){
    
    if(n==0){
        
        return ;
    }
    vector<li>arr;
    
    for(int i=0;i<v.size();i++){
        
        
        if(v[i]>n){
            break;
        }
        
        else {
            
            arr.push_back(v[i]);
        }
    }
    
    n=n-arr[arr.size()-1];
    
    cout<<arr[arr.size()-1]<<" ";
    change(n,v);
}




int main() {
	//code
	
	li t;
	cin>>t;
	vector<li> v={1,2,5,10,20,50,100,200,500,1000};
	
	while(t-->0){
	
	
	li n;
	cin>>n;
	change(n,v);
	cout<<"\n";
	}
	return 0;
}