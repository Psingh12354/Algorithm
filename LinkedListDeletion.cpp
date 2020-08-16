#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};

void Insert(Node **head_ref,int new_data)
{
	Node *new_node=new Node();
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
Node* head=new Node;
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
int main()
{
	head=NULL;
	Insert(&head,2);
	Insert(&head,3);
	Insert(&head,4);
	Insert(&head,5);
	cout<<"Nodes values is : \n";
	traverse(head);
	int n;
	cout<<"\nEnter the position to delete :\n";
	cin>>n;
	Delete(n);
	traverse(head);
}
