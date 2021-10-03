#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
void insertion(Node*n,int key){
    Node *t = n;
    while(t->next != NULL){
        t = t->next;
    }
    
     Node *q = new Node();
    q->data = key;
    q->next = NULL;
    t->next = q;
    

}
    


int main(){
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;
    
    head = new Node();
    second = new Node();
    first = new Node();
    third = new Node();
    head->data = 1; 
    head->next = first; 
    first->data = 10;
 
    first->next = second;

 
    second->data = 3; 
    second->next = third;
    third->data = 7; 
    third->next = NULL;
    printList(head);
   
    int key;
    cout<<"enter the key";
    cin>>key;
   insertion(head,key);
    
    cout<<endl;
    printList(head);
   

    
    return 0;
}