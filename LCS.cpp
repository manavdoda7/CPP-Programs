//LCS --> Longest common subsequence
#include<bits/stdc++.h>
using namespace std;

// DP
int lcs_DP(string s,string t)
{
    int m = s.size();
    int n = t.size();

    int **output = new int*[m+1];
    for(int i=0;i<=m;i++)
    {
        output[i] = new int[n+1];
    }
    
    // Fill first row
    for(int j=0;j<=n;j++)
    {
        output[0][j] = 0;
    }

    // Fill first column
    for(int i=1;i<=m;i++)
    {
        output[i][0] = 0;
    }

    // Fill remaining cells
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[m-i]==t[n-j])
            {
                output[i][j] = output[i-1][j-1]+1;
            }
            else
            {
                int a = output[i-1][j];
                int b = output[i][j-1];
                int c = output[i-1][j-1];

                output[i][j] = max(a,max(b,c));
            }
        }
    }
    return output[m][n];
}

//MEMOIZATION
int lcs_mem(string s,string t,int **output)
{
    int x = s.size();
    int y = t.size();
    //Base Case
    if(x==0 || y==0)
        return 0;

    //If ans already exists
    if(output[x][y]!=-1) return output[x][y];

    //Recursive call
    int ans;
    if(s[0]==t[0])
    {
        ans = 1+lcs_mem(s.substr(1),t.substr(1),output);
    }
    else{
        int x = lcs_mem(s.substr(1),t,output);
        int y = lcs_mem(s,t.substr(1),output);
        int z = lcs_mem(s.substr(1),t.substr(1),output);

        ans = max(x,max(y,z));
    }
    //save our ans and return
    output[x][y] = ans;
    return ans;
}

int lcs_mem(string s,string t)
{
    int x = s.size();
    int y = t.size();
    int **output = new int*[x+1];
    for(int i=0;i<=x;i++)
    {
        output[i] = new int[y+1];
        for(int j=0;j<=y;j++)
        {
            output[i][j] = -1;
        }
    }
    lcs_mem(s,t,output);
    int ans = output[x][y];
    for(int i=0;i<=x;i++)
    {
        delete [] output[i];
    }
    delete []output;
    return ans;
}

//BRUTE FORCE
int lcs(string s,string t)
{
    //Base Case
    if(s.size()==0 || t.size()==0)
        return 0;
    
    //Recursive call
    if(s[0]==t[0])
    {
        return 1+lcs(s.substr(1),t.substr(1));
    }
    else{
        int x = lcs(s.substr(1),t);
        int y = lcs(s,t.substr(1));
        int z = lcs(s.substr(1),t.substr(1));

        return max(x,max(y,z));
    }
}

int main()
{
    string s,t;
    cin>>s>>t;
    cout<<lcs(s,t)<<endl;
    cout<<lcs_mem(s,t)<<endl;
    cout<<lcs_DP(s,t)<<endl;
}
