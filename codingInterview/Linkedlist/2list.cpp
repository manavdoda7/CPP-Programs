#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node* next;
};

node* head=NULL;
node* head1=NULL;


node* getnode(int data){

node* temp= new node();

temp->data= data;
temp->next= NULL;
return temp;

}

void insert(node* head,int data){

node* temp=getnode(data);
node* temp1= getnode(data);



if(head==NULL){
temp->next= head;
head= temp;
return;
}

else{
    temp= head;
while(temp!=NULL){

    temp= temp->next;
}

temp->next= temp1;

}

}


void merge(node*head,node**head1)
{

node* p= head;
node*q= *head1;

node* pnxt;
node* qnxt;


while(p!=NULL and q!= NULL){

pnxt= p->next;
qnxt=q->next;

q->next= pnxt;
p->next=q;

p=pnxt;
q=qnxt;
}

*head1=q;
}


void traverse(node* head){

    node* temp= head;

    while(temp!=NULL){


        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

int main(){
cout<<"Insert element of 1st node\n";

int k;
int n;
cin>>n;
for(int i=0;i<n;i++){
cin>>k;
insert(head,k);
}
cout<<"Insert in second Node\n";

for(int i=0;i<n;i++){
cin>>k;
insert(head1,k);
}


cout<<"First List :-\t";
traverse(head);
cout<<"second List:-\t";
traverse(head1);

cout<<"Merge List\n";
merge(head,&head1);

traverse(head);

return 0;


}