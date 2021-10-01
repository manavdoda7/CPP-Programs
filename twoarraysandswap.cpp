#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int t,a[30],b[30],k,n,i,j,p1,p2,s;
     cin>>t;
     for(i=0;i<t;i++){
          cin>>n>>k;
          for(j=0;j<n;j++){
               cin>>a[j];
          }
          for(j=0;j<n;j++){
               cin>>b[j];
          }
          sort(a,a+n);
          sort(b,b+n);
          s=0;
          p1=n-1;
          p2=n-1;
          for(j=0;j<n;j++){
               if(a[p1]<b[p2] && k!=0){
                    s+=b[p2];
                    p2--;
                    k--;
               }
               else{
                    s+=a[p1];
                    p1--;
               }
          }
          cout<<s<<endl;
     }
     return 0;
}
