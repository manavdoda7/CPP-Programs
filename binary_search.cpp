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

ll res(ll x, ll y, ll n, ll l, ll h) {
    ll m=(l+h)/2;
    while(l<=h) {
        m=(l+h)/2;
        ll paintings= m/x + m/y;
        if(paintings>=n) h=m-1;
        else l=m+1;
    }
    return m;
}
 
int main() {
 
	tc(tt) {
        ll x, y, n;
        cin>>n>>x>>y;
        if(x>y) swap(x, y);
        if(n<=1) cout<<n*x<<endl;
        else cout<<res(x, y, n-1, 0, x*n)+x<<endl;
    }
}