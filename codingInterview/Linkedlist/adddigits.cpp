#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int adddigits(int n){

int sum=0;
if(n==0){

    return 0;
}
while(n!=0){
int r= n%10;
sum= sum+r;
n= n/10;

if(n==0){
    if(sum/10 ==0)
    return sum;

    else
    {
        n= sum;
    }
    
}


}
return 0;



}



int main(){

    int n;
    cin>>n;

    n=adddigits(n);
    cout<<n;
    return 0;

}