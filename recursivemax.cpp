#include<climits>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int maximum(Node* n)
{   int x =0;
    if(n == NULL){
        return INT_MIN;
    }
    else{
        x = maximum(n->next);
        if(x>n->data){
            return x;
        }
        else{
            return n->data;
        }

    }
}
int main(){
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    
    head = new Node();
    second = new Node();
    first = new Node();
    head->data = 1; 
    head->next = first; 

    first->data = 10;
 
    
    first->next = second;

 
    second->data = 3; 
    second->next = NULL;
    cout<<maximum(head);
 
    
    return 0;
}