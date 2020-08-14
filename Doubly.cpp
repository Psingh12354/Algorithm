#include <iostream>
using namespace std;
struct Node {
   int data;
   Node* next;
   Node* prev;
};
void Front(struct Node** head, int new_data)
{
   Node *newNode = new Node;
   newNode->data = new_data;
   newNode->next = (*head);
   newNode->prev = NULL;
   if ((*head) != NULL)
   (*head)->prev = newNode;
   (*head) = newNode;
}
void After(struct Node* prev_node, int new_data)
{
   if (prev_node == NULL) {
   cout<<"previous node Null";
   return;
}
   Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = prev_node->next;
   prev_node->next = newNode;
   newNode->prev = prev_node;
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}
void End(struct Node** head, int new_data)
{
   Node* newNode = new Node;
  
   Node* last = *head; 
   newNode->data = new_data;
   newNode->next = NULL;
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}
while (last->next != NULL)
last = last->next;
last->next = newNode;
newNode->prev = last;
return;
}
void traverse(Node* node) {
   Node* last;
   while (node != NULL) {
      cout<<node->data<<" ";
      last = node;
      node = node->next;
   }
   if(node == NULL)
   cout<<"NULL";
   }
int main() {
   Node* head = NULL;
   End(&head, 40);
   Front(&head, 20);
   Front(&head, 10);
   End(&head, 50);
   After(head->next, 30);
   traverse(head);
   return 0;
}
