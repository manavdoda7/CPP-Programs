/* Binary exponentiation in C++*/

#include<bits/stdc++.h>
using namespace std;

long long int binpow(long long int a, long long int b);

int main(){

    /*
    To evaluate a^b.
    By normal arithmetic operation it will have Time complexity of O(b).
    But by Binary exponentiation we will have Time complexity of O(log2(b)).
    */ 

    long long int a; 
    cin >> a;

    long long int b;
    cin >> b;

    long long int ans = binpow(a,b);
    cout << ans << "\n";
 
    return 0;
}

// Recursive function to find a^b in optimum time.
long long int binpow(long long int a, long long int b){
    if(b==0) return 1;
    long long int res = binpow(a,b/2);
    if(b%2 == 1) return res*res*a;
    else return res*res;
}
