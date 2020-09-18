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
int Debth(Node *temp)
{
	if(root=NULL)
	{
		return 0;
	}
	else
	{
		int leftD=0,rightD=0;
		if(temp->left!=NULL)
		{
			leftD=Debth(temp->left);
		}
		if(temp->right!=NULL)
		{
			rightD=Debth(temp->right);
		}
		int max=(leftD>rightD)?leftD:rightD;
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
	cout<<"Maximum Debth is : "<<Debth(root);
	return 0;
}
