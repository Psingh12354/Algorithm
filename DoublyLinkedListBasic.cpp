#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node* prev;
};
void traverse(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<"<==>";
		n=n->next;
	}
}
int main()
{
	Node* head=new Node();
	Node* first=new Node();
	Node* second=new Node();
	Node* third=new Node();
	head->data=1;
	head->next=first;
	head->prev=NULL;
	first->data=2;
	first->next=second;
	first->prev=head;
	second->data=3;
	second->next=third;
	second->prev=first;
	third->data=4;
	third->next=NULL;
	third->prev=second;
	traverse(head);
}
