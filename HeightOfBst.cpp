#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
Node *root=NULL;
Node* Create(int data){
	Node *newNode=new Node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
int Height(Node *temp)
{
	if(root=NULL)
	{
		return 0;
	}
	else
	{
		int leftH=0,rightH=0;
		if(temp->left!=NULL)
		{
			leftH=Height(temp->left);
		}
		if(temp->right!=NULL)
		{
			rightH=Height(temp->right);
		}
		int max=(leftH>rightH)?leftH:rightH;
		return max+1;
	}
}
int main()
{
	root = Create(1);  
    root->left = Create(2);  
    root->right = Create(3);  
    root->left->left = Create(4);  
    root->right->left = Create(5);  
    root->right->right = Create(6);  
    root->right->right->right= Create(7);  
    root->right->right->right->right = Create(8);  
	cout<<"Maximum Height is : "<<Height(root);
	return 0;
}
