#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *left;
		node *right;
};

node *tree=NULL;

node *insert(node *tree,int num)
{
	node *ptr,*nodePtr,*parentPtr;

	ptr=new node();
	ptr->data=num;

	if(tree==NULL)
	{
		tree=ptr;
		node *left=NULL;
		node *right=NULL;
	}
	else
	{
		parentPtr=NULL;

		nodePtr=tree;

		while(nodePtr!=NULL)
		{
			parentPtr=nodePtr;

			if(num<nodePtr->data)
			{
				nodePtr=nodePtr->left;
			}
			else
			{
				nodePtr=nodePtr->right;
			}
		}

		if(num<parentPtr->data)
		{
			parentPtr->left=ptr;
		}
		else
		{
			parentPtr->right=ptr;
		}
	}
	return tree;
}

void postorder(node *tree)
{
	if(tree!=NULL)
	{
		postorder(tree->left);
		postorder(tree->right);
		cout<<tree->data<<endl;
	}
}

int main()
{
	int ch,num;

	do{
		cout<<"1.CREATE"<<endl;
		cout<<"2.POSTORDER"<<endl;

		cout<<"Enter the choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1:
			cout<<"Enter the number : ";
			cin>>num;
			tree=insert(tree,num);
			cout<<endl;
			break;	

			case 2:
			postorder(tree);
			break; 
		}

	}while(ch!=3);
}