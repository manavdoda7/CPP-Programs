#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int t,x,y,n,i,k,l;
     cin>>t;
     for(i=0;i<t;i++)
     {
          cin>>x>>y>>n;
          k=n/x;
          k=k*x;
          if(k+y<=n){
               cout<<k+y<<endl;
          }
          else{
               cout<<k-x+y<<endl;
          }
     }
     return 0;
}
