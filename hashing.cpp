#include <bits/stdc++.h>
#include<unordered_map>
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
    int res=0;
    pair<int, int> arr[n];
    for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
    unordered_map<int, vector<int> > Y;
    unordered_map<int, vector<int> > X;
    rep(i, 0, n) {
        X[arr[i].first].push_back(arr[i].second);
        Y[arr[i].second].push_back(arr[i].first);
    }
    for(auto it:X) sort(X[it.first].begin(), X[it.first].end());
    for(auto it:Y) sort(Y[it.first].begin(), Y[it.first].end());
    // cout<<"X: \n";
    // for(auto it:X) {
    //     cout<<it.first;
    //     for(int i=0;i<it.second.size();i++) cout<<it.second[i]<<" "; cout<<endl;
    // }
    // cout<<"Y:\n";
    // for(auto it:Y) {
    //     cout<<it.first<<" ";
    //     for(int i=0;i<it.second.size();i++) cout<<it.second[i]<<" "; cout<<endl;
    // }
    rep(i, 0, n) {
        int l1=X[arr[i].first].size()-1;
        int l2=Y[arr[i].second].size()-1;
        if(X[arr[i].first][0]!=arr[i].second && Y[arr[i].second][0]!=arr[i].first && X[arr[i].first][l1]!=arr[i].second && Y[arr[i].second][l2]!=arr[i].first) res++;
    }
    cout<<res<<endl;
}