//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	int arr[256]={};
    	if(A.size()!=B.size()) return -1;
    	for(int i=0;i<A.size();i++) {
    	    arr[A[i]]++;
    	    arr[B[i]]--;
    	}
    	for(int i=0;i<256;i++) if(arr[i]) return -1;
    	int j=B.size()-1, res=0, i=A.size()-1;
    	while(i>=0) {
    	    if(A[i]==B[j]) {i--; j--;}
    	    else {res++; i--;}
    	}
    	return res;
    // 	ABCD
    //  DBAC
    
    }
};

//{ Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}
// } Driver Code Ends
