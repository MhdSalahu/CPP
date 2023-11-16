#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* createNode(int key)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data=key;
	newNode->left=newNode->right= NULL;
	return newNode;
}
void inOrder(struct Node* root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}
void preOrder(struct Node* root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
}
void postOrder(struct Node* root)
{
	if(root!=NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}
int main()
{
	struct Node* root = createNode(4);
	root->left=createNode(2);
	root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(3);
    root->right->left = createNode(5);
    root->right->right = createNode(7);
    cout<<"Pre-order Traversal:\n";
    preOrder(root);
    cout<<"\nIn-order Traversal:\n";
    inOrder(root);
    cout<<"\nPost-order Traversal:\n";
    postOrder(root); 
    return 0;
}

