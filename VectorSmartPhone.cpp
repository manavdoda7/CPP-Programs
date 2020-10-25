#include <bits/stdc++.h> 
#include<vector>
using namespace std;


int main() {
    vector<int> v;
    int n,a;
    int max;
    cin>>n;
     for (int i = 1; i <= n; i++){
        v.push_back(i);
    }
    sort(v.begin(), v.end()); 
    max=v.front();
    for (int i = 0; i <=n; i++){
        a=v[i]*(n-i);
        if(max<=a){
            max=a;
    }
    }
    cout<<max<<endl;
	// your code goes here
	return 0;
}
