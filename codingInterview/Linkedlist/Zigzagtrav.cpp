#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Tree{

    int val;
    Tree* left;
    Tree* right;
};
Tree* root= NULL;


Tree* insert( Tree* root, int val){
    if(root== NULL){
        root->val= val;
root->left= NULL;
root->right= NULL;
return root;
    }

    else if(val<root->val){
        root= insert(root->left,val);
    }
    else{
        root= insert(root->right,val);
    }

return root;


}

void zigzag(Tree* root,vector<vector<int>>&res){

bool vis= false;

Tree* temp= root;

stack<Tree*> v;
v.push(root);
while(!v.empty()){

    Tree* vall = v.top();
    v.pop();

    vector<int> a;

    a.push_back(vall->val);
    res.push_back(a);
if(!vis){


    if(vall->left){

        v.push(vall->left);
vall= vall->left;
    }
    if(vall->right){

        v.push(vall->right);
        vall= vall->right;
    }
}
else{

    if(vall->right){
        v.push(vall->right);

    }
    if(vall->left){
        v.push(vall->left);

    }
}

}




}

int main(){

    vector<vector<int>>res;
    insert(root,3);
    insert(root,9);
     insert(root,20);
      insert(root,15);
       insert(root,7);
zigzag(root,res);

for(auto &count : res){
cout<<count[0];


}
return 0;
    
}



