#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void traverse(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	Node* head=new Node();
	Node* first=new Node();
	Node* second=new Node();
	head->data=5;
	head->next=first;
	first->data=6;
	first->next=second;
	second->data=7;
	second->next=NULL;
	cout<<"Head : "<<head->data<<endl;
	cout<<"Traversing Linked List are : ";
	traverse(head); 
	return 0;
}
