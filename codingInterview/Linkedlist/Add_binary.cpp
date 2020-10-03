#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

string add_binary(string a,string b){

string s;
int i=a.length()-1;
int j=b.length()-1;

int sum=0;
int c=0;

while(i>=0 and j>=0){

    sum= a[i]+b[j]+c;

    c=sum/2;
    sum=sum%2;

    s.push_back(sum);
    i--;
    j--;
}

if(c){


if(i!=0){

    while(i>=0){

        int suma=a[i]+c;
        c=suma/2;
        suma=suma%2;
s.push_back(suma);
i--;
    }

}

if(j!=0){
    while(j>=0){

        int sumb= b[i]+c;
c=sumb/2;
sumb=sumb%2;
s.push_back(sumb);
j--;
    }
}

}

if(c){
    s.push_back(c);
}

s[s.length()-1]= s[s.length()-1]- '0';
reverse(s.begin(),s.end());


return s;


}





int main(){
string a;
string b;

cin>>a;
cin>>b;

cout<<add_binary(a,b);
return 0;

}