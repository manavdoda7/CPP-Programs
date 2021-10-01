#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

string prefix(string str) {
    int len=str.length();
    stack<char> s;
    string res;
    unordered_map<char, int> M;
    M['+'] = ( M['-'] = 1);
    M['*'] = ( M['/'] = 2);
    M['^'] = 3;
    for(int i=len-1;i>=0;i--) {
        if(str[i]>='a' && str[i]<='z') res+=str[i];
        else {
            if(str[i]==')') s.push(str[i]);
            else if(str[i]=='(') {
                while(!s.empty() && s.top()!=')'){res+=s.top(); s.pop();}
                s.pop();
            }
            else if(s.empty() || M[s.top()]<M[str[i]]) s.push(str[i]);
            else {
                while(!s.empty() && (M[s.top()]>M[str[i]] || (M[s.top()]==M[str[i]] && str[i]=='^'))) {res+=s.top(); s.pop();}
                s.push(str[i]);
            }
        }
    }
    while(!s.empty()) {res+=s.top(); s.pop();}
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cout<<prefix("(a+b)*c+d-(e/g)^f");
}