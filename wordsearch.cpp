#include<iostream>
#include<bits/stdc++.h>

using namespace std;


bool searchit(vector<vector<string>>&board,int i,int j,string& word,int idx,vector<vector<bool>>&visited){


if(idx==word.length()-1) return true;

visited[i][j]= true;

if(i>0 &&!visited[i-1][j]&&board[i-1][j]== word[idx+1]&& searchit(board,i-1,j,word,idx+1,visited)) return true;

if(j>0 &&!visited[i][j-1]&& board[i][j-1]==word[idx+1]&& searchit(board,i,j-1,word,idx+1,visited)) return true;

if(i<board.size()&& !visited[i+1][j]&&board[i+1][j]== word[idx+1]&& searchit(board,i+1,j,word,idx+1,visited)) return true;
if(j<board[0].size() && !visited[i][j+1]&&board[i][j+1]== word[idx+1]&& searchit(board,i,j+1,word,idx+1,visited)) return true;


return false;



}




bool wordss(vector<vector<string>>&board,string word)
{


    int r= board.size();
    int c= board[0].size();
 vector<vector<bool>>visited(r,vector<bool>(c,false));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            if(board[i][j]== word[i] && searchit(board,i,j,word,0,visited) ) return true;

        }
    }
    return false;





}

int main(){

vector<vector<string>> board;
string word;

cin>>word;

for(int i=0;i<board.size();i++){

    for(int j=0;j<board[0].size();j++){
        cin>>board[i][j];
    }
}

cout<<wordss(board word);
return 0;

}
