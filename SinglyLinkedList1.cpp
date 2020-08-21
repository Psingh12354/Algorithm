#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
Node* head = NULL;
void insert(int newdata) {
    Node *newnode = new Node();
	Node *ptr = head;
    newnode->data = newdata;
    newnode->next = head;
    if (head!= NULL) {
      while (ptr->next != head)
      ptr = ptr->next;
      ptr->next = newnode;
   } else
   newnode->next = newnode;
   head = newnode;
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
void traverse() {
   struct Node* ptr;
   ptr = head;
   do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
}
int main() {
	int n;
	int x;
	cout<<"Enter the size of singly linked list : \n";
	cin>>n;
	cout<<"\nEnter linked list element : \n";
	for(int i=0;i<=n;i++)
	{
		cin>>x;
		insert(x);
	}
   traverse();
	int d;
	cout<<"\nEnter the position to delete :\n";
	cin>>d;
	Delete(d);
	traverse();
   return 0;
}
