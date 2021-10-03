#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




void main(){
	// test vector
    vector<int> input = {1,2,3,4,5,6,7,8,9,1,2,3,4,4,5,5,5};

    //initializing map 
	unordered_map<int, int> ans;

	//initializing size of the test vector
	int sz = input.size();

	//counting frequency in map
	for(int i = 0; i < sz; i++)	ans[input[i]]++;

	//priniting frequency in map
	for(auto& it: ans)	cout<<it.first<<" "<<it.second<<endl;
}
