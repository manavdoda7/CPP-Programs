#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        // code here
        unordered_map<string, pair<int, int>> mp;
        for(int i=0;i<n;i++) {
            if(mp.find(arr[i])==mp.end()) mp[arr[i]] = {i, 1};
            else mp[arr[i]].second++;
        }
        int lI=0, freq=1;
        string res;
        for(auto it: mp) {
            if(it.second.second>freq) {
                lI = it.second.first;
                freq = it.second.second;
                res = it.first;
            } else if(it.second.second==freq && it.second.first>lI) {
                lI = it.second.first;
                res=it.first;
            }
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}
