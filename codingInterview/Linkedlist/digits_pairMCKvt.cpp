#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>v(n);

    for(int i=0;i<n;i++){


cin>>a[i];

while(a[i]!=0){

    int r= a[i]%10;
    v.push_back(r);

    a[i]=a[i]/10;
    
}
int c= *max_element(v.begin(),v.end());
int d= *min_element(v.begin(),v.end());
a[i]=c*11+d*7;
v.clear();

    }

for(int i=0;i<n;i++){

    if(a[i]/100!=0){

        int k= a[i]/100;
        a[i]=a[i]-k*100;
    }
}

unordered_map<int,int> mp;

for(int i=0;i<n;i++){

    mp.insert({i+1,a[i]/10});
}int c=0;

for(int i=0;i<n;i++){

    v[i]=a[i]/10;
}
int i=0;
int j;

int p=0;
while(i<n){
    j=i+1;
    if(j>=n){

        break;
    }
if(v[i]==v[j]){


    if(i%2==0 and j%2==0){


        c++;
    }
    else if(i%2!=0 and j%2!=0){

        p++;
    }
}

j++;

if(j>=n){

    i++;
    j=0;
}

}


    for(int i=0;i<n;i++){

        cout<<a[i]<<" ";
    }
cout<<"\n";
cout<<c+p;
return 0;
}