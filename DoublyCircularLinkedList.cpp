#include<iostream>
using namespace std;
struct Node  {
	int data;
	Node* next;
	Node* prev;
};

Node* head=new Node(); 

Node* NewNode(int x) {
	Node* newNode=new Node();
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
void Head(int x) {
	Node* newNode = NewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}
void Tail(int x) {
	Node* temp = head;
	Node* newNode = NewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
}
void Delete(int n)
{
Node* temp1=head;
if(n==1)
{
	head=temp1->next;
	free(temp1);
	return;
}
for(int i=0;i<n-2;i++)
	temp1=temp1->next;
Node* temp2=temp1->next;
temp1->next=temp2->next;
free(temp2);
}

void traverse(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main() {
	head = NULL;
	Head(2);
	Head(3);
	Tail(4);
	traverse(head);
	int n;
	cout<<"\nEnter the position to delete :\n";
	cin>>n;
	Delete(n);
	traverse(head);
	return 0;
	
}
