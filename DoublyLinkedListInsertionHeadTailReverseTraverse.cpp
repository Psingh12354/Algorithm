#include<iostream>
using namespace std;
struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};
Node* head; 

struct Node* GetNewNode(int x) {
	Node* newNode=new Node();
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
void InsertAtHead(int x) {
	Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}
void InsertAtTail(int x) {
	Node* temp = head;
	Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; 
	temp->next = newNode;
	newNode->prev = temp;
}
void traverse(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<"==>";
		n=n->next;
	}
	cout<<"\n";
}
void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return; 
	while(temp->next != NULL) {
		temp = temp->next;
	}
	cout<<"Reverse: \n";
	while(temp != NULL) {
		cout<<temp->data<<"<==";
		temp = temp->prev;
	}
	cout<<"\n";
}

int main() {
	head = NULL; 
	InsertAtTail(2); 
	traverse(head);
	ReversePrint();
	cout<<"new\n";
	InsertAtTail(4);
	traverse(head);
	ReversePrint();

}
