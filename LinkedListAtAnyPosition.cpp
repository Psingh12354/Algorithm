#include<iostream>
using namespace std;
struct Node {
    int data;
 	Node* next;
};
 
Node* head;

void Insert(int data, int n)
{
    int i;
	Node* temp1  = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
	Node* temp2 = head;
    for(i=0;i<n-2;i++)
    {
        temp2 = temp2->next;
    }
 
    temp1->next = temp2->next;
    temp2->next = temp1;
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
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    traverse(head);
 
    return 0;
}
