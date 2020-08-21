#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node* prev;
};
Node* head=new Node();
void traverse() {
	Node* ptr;
   ptr = head;
   do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
}
int main()
{

	Node* first=new Node();
	Node* second=new Node();
	head->data=1;
	head->next=first;
	head->prev=NULL;
	first->data=2;
	first->next=second;
	first->prev=head;
	second->data=3;
	second->next=head;
	second->prev=first;
	traverse();
	return 0;
}
