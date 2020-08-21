#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
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
	first->data=2;
	first->next=second;
	second->data=3;
	second->next=head;
	traverse();
	return 0;
}
