#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
Node* Search(Node *root,int data)
{
	if(root==NULL) 
	{
		return NULL;
	}
	else
	if(root->data==data)
	{
		return root;
	}
	else
	if(root->data<data)
	{
		return Search(root->right,data);
	}
	else
	return Search(root->left,data);
}
Node *SearchMin(Node *root)
{
	if(root==NULL)
	{
		return NULL;
	}
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root;
}
Node *Successor(Node *root,int data)
{
	Node *Current=Search(root,data);
	if(Current==NULL)
	{
		return NULL;
	}
	if(Current->right!=NULL)
	{
		return SearchMin(Current->right);
	}
	else
	{
		Node *successor=NULL;
		Node* ancestor=root;
		while(ancestor!=Current)
		{
			if(Current->data<ancestor->data){
				successor=ancestor;
				ancestor=ancestor->left;
			}
			else
			{
				ancestor=ancestor->right;
			}
		}
		return successor;
	}
}
void Inorder(Node *root)
{
	if(root==NULL) return;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
Node* Insert(Node *root,char data)
{
	if(root==NULL)
	{
		root=new Node();
		root->data=data;
		root->left=root->right=NULL;
	}
	else
	if(data<=root->data){
		root->left=Insert(root->left,data);
	}
	else 
	{
		root->right = Insert(root->right,data);
	}
	return root;
}
int main()
{
	Node* root=NULL;
	root=Insert(root,6);
	root=Insert(root,11);
	root=Insert(root,4);
	root=Insert(root,5);
	root=Insert(root,1);
	root=Insert(root,11);
	cout<<"Traversal : \n";
	Inorder(root);
	Node* successor=Successor(root,1);
	if(successor==NULL)
	{
		cout<<"No successor found\n";
	}
	else
	{
		cout<<"Successor found at "<<successor->data<<"\n";
	}
	return 0;
}
