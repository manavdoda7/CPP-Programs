#include<iostream>
using namespace std;
#include "node.cpp"

node* takeInput(){
	node* head = NULL;
	node* tail = NULL;
	int data;
	cin >> data;
	while(data != -1){
		node* newNode = new node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail -> nxt = newNode;
			tail = tail -> nxt;
		}
		cin >> data;
	}
	return head;
}

void print(node* head){
	node* temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> nxt;
	}
	cout << endl;
}

int length(node* head){
    if(head == NULL){
        return 0;
    }
    return 1 + length(head -> nxt);
}

node* append(node* head, int m){
	int l = length(head);
	node* temp = head;
	while(temp -> nxt != NULL){
		temp = temp -> nxt;
	}
	temp -> nxt = head;
	node* t = head;
	for(int i = 1; i < (l - m); i++){
		t = t -> nxt;
	}
	head = t -> nxt;
	t -> nxt = NULL;
	return head;
}

int main(){
	int n;
	cin >> n;
	int i = 0;
	while(i < n){
		int m;
		node* head = takeInput();
		cin >> m;
		head = append(head,m);
		print(head);
		i++;
	}
	return 0;
}
