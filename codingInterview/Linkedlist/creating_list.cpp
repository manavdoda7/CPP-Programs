#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct Node{
    int val;
    Node* next;
};

Node* head=NULL;

class linked{
public:
Node* getnode(int data){ //create node 

    Node* temp= new Node();

    temp->val= data;
    temp->next= NULL;

    return temp;
}

void Insertbeg(int data){ //insert at beginning of linked list

Node* temp2= getnode(data);
Node *temp= getnode(data);

    if(head == NULL){
        temp->next=head;
        head= temp;
        return;
    }

temp= head;

while(temp->next!=NULL){
    temp=temp->next;
    }
 temp->next=temp2;
}

void delee(Node *head,int val){  //delete a node from a linked list

Node *curr= new Node();
curr= head;

if(curr->val ==val){
curr= curr->next->next;
}

else{
curr= curr->next;
}

if(head->val= val){
head=head->next;
curr= head;
}

}
void mid(Node * head){


Node* slow = head;

Node* fast= slow->next->next;

while(fast->next!=nullptr){

      slow= slow->next;
    fast= fast->next;
  
}

cout<<slow->val<<"\n";



}

void middle(Node* head){ //finding middle of linked list

    int c=0;
    Node* temp= head;

while( temp!=NULL){

        temp=temp->next;
        c++;
    }
temp=head;
for(int i=0;i<c/2;i++){
        temp=temp->next;
          }
        cout<<temp->val<<"\n";

}

void traverse(Node *head){ //traversing the linked list

   if(head==NULL){
return;
}
    Node* temp= head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;

    }
    cout<<"NULL\n";
    }
};

int main(){ //driver code 

linked l;
int n;
cin>>n;
int k;

for(int i=0;i<n;i++){
    cin>>k;
    l.Insertbeg(k);

}
// l.delee(head,3);

 l.middle(head);
 l.mid(head);
l.traverse(head);
    return 0;

}
