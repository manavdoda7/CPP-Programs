#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

class Solution{
public:	
	
	//Function to get the nth ugly number
	ull getNthUglyNo(int n) {
	    ull dp[n+1];// declaring an array dp
	    dp[1]=1; // storing 1 at first index .By default first ugly number is 1.

	    ull p2=1; //pointer for 2
	    ull p3=1; //pointer for 3
	    ull p5=1;// pointer for 5
	    
	    for(int i=2;i<=n;i++)
	    {
            // candidates for next ugly number
	        ull ans2=2*dp[p2];
	        ull ans3=3*dp[p3];
	        ull ans5=5*dp[p5];
            //above three are candidates for next ugly number
	        
            //the minimum of above three candidates will be next ugly number
	        ull m=min(ans2,ans3);
	        m=min(m,ans5);
	        dp[i]=m;
	        
	        if(m==ans2) 
	        p2++;
	        if(m==ans3)
	        p3++;
	        if(m==ans5)
	        p5++;
	    }
	    return dp[n];
	}
};

// Driver Code Starts.

int main() { {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
