#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node *newNode(int data)
{
	Node* node=new Node();
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int max(int a,int b)
{
	return (a>b)?a:b;
}
int height(Node *node)
{
	if(node==NULL)
	{
		return 0;
	}
	return max(height(node->left),height(node->right))+1;
}
int Diameter(Node *tree)
{
	if(tree==NULL)
	{
		return 0;
	}
	int heightL=height(tree->left);
	int heightR=height(tree->right);
	int DiameterL=Diameter(tree->left);
	int DiameterR=Diameter(tree->right);
	return max(heightL+heightR+1,max(DiameterL,DiameterR));
}
int main()
{
	Node *root=newNode(5);
	root->left=newNode(6);
	root->right=newNode(7);
	root->left->left  = newNode(8); 
    root->left->right = newNode(9);
	cout<<"Diameter is : "<<Diameter(root);
	return 0; 
}
