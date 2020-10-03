// trie using map generalized form of trie

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

     struct trie{

        unordered_map<char,trie*>mp;
        bool isend;

                trie(){
            isend= false;
            }
                };
            trie *root;

            void insert1(string word){  //insertion in the trie node
            trie *cur= root;
            for(char ch: word){
                if(!cur->mp.count(ch))  //count for the letter if already present in the trie

                    cur->mp[ch]= new trie;
                cur= cur->mp[ch];
            }
            cur->isend= true;
            }

bool search2(string word){

trie *cur= root;
for(char ch: word){

    if(!cur->mp.count(ch))
        return false;
        cur= cur->mp[ch];
}
return cur->isend;

}

bool prefix(string word){
trie *curr= root;
for(char ch: word){

    if(!curr->mp.count(ch)){
        return false;
        curr= curr->mp[ch];
    }
    return true;
}
}

int main(){
root= new trie;

long long int n;
cin>>n;
while(n--){

    string str;
    cin>>str;

    insert1(str);
}
cin>>n;
while(n--){

    string str;
    cin>>str;
    if(search2(str)){
        return true;

    }
    else{
       return false;
    }
}

 while(n--){

    string str;
    cin>>str;
    if(prefix(str)){
        cout<<"present";

    }
    else{
        cout<<"Not present";
    }
}


}

/***Alternative approach given below


class trie_node{
  public:
       unordered_map<char,trie_node*>mp;
       bool isend;
    trie_node(){

        isend= false;
    }
};

trie_node *root;






class Trie {
public:
    /** Initialize your data structure here.

    Trie() {

             root= new trie_node();

    }



    /** Inserts a word into the trie.
    void insert(string word) {
        trie_node *current = root;
        for(char ch: word){

            if(current->mp.find(ch)== current->mp.end()){

                current->mp[ch]= new trie_node;

            }
              current = current->mp[ch];
        }
        current->isend= true;

    }

    /** Returns if the word is in the trie.
    bool search(string word) {


        trie_node  *current= root;
        for(char ch: word){

            if(current->mp.find(ch)== current->mp.end()){

                return false;
            }
            current= current->mp[ch];
        }

         return current->isend;


    }

    /** Returns if there is any word in the trie that starts with the given prefix.
    bool startsWith(string prefix) {

     trie_node  *current= root;

        for(char ch: prefix){

            if(current->mp.find(ch)== current->mp.end() ){

                return false;

            }
             current= current->mp[ch];
        }

   return true;


    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */





