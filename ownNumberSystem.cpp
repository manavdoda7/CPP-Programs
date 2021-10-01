#include <bits/stdc++.h>
using  namespace std;
#define ll long long
// #define int long long
#define pb(x) push_back(x);
#define ce(x) cout << x << '\n';
#define db  long double;
using pll = pair < ll, ll >;
#define scan(a, n) 		for(int i = 0; i < n; i++)cin >> a[i];
#define rep(i,x,n) for(ll i=x ; i<n ; i++)
#define per(i,x,n) for( i=x ; i>n ; i--)
#define hell 1000000007
#define infl LLONG_MAX
#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Fill(s,v) memset(s,v,sizeof(s))
#define cout_p(x, p) cout << fixed << setprecision((p)) << x << endl     //print with precision
 
#define tc(tt) \
    ll tt;    \
    cin >> tt; \
    while(tt--) // testcase 
 
int main() {
	int n;
    cin>>n;
    string str=to_string(n);
    int res=0;
    for(int i=0;i<str.length(); i++) {
        res*=3;
        if(str[i]=='2') res+=1;
        if(str[i]=='4') res+=2;
        if(str[i]=='8') res+=3;
    }
    cout<<res<<endl;
}