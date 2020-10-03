#include<iostream>
#include<bits/stdc++.h>

using namespace std;

 void twosum(vector<int>&nums,vector<int>&res,int val){
int y;
map<int,int> mp;


for(int i=0;i<nums.size();i++){
    y= val-nums[i];
    if(mp.find(val)!=mp.end()){

res[0]=i;
res[1]=mp[val];

    }
    else{

        mp.insert({nums[i],i});
    }
}

}


int main(){
int n;
cin>>n;
    vector<int>nums(n);

    for(int c:nums){
        cin>>c;
    }
int val;
cout<<"Insert val\n";
cin>>val;
    vector<int>res(2);
    twosum(nums,res,val);
     for(int c:res){
        cout<<c;
    }

    return 0;
}