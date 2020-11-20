#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	node()
	{
		
		node* left=NULL;
		node* right=NULL;
	}
};

struct node* create()
{
	int x;
	struct node* node=new struct node();
	
	cin>>x;
	if(x==-1)
	return 0;
	node->data=x;
	cout<<"enter left node : ";
	node->left=create();
	cout<<"enter right node : ";
	node->right=create();
	return node;
	
}
int heightf(struct node* node)
{
	int height=0;
	if(node==NULL)
	{
		return 0;
	}
	int lht=heightf(node->left);
	int rht=heightf(node->right);
	if(lht>rht)
		return lht+1;
	else
		return rht+1;
}
int main()
{
	struct node* root = create();
	int height=heightf(root);
	cout<<height;
	return 0;
}
