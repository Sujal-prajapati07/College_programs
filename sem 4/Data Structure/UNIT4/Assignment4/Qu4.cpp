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

int searchElement(node *tree,int num,int flag)
{
	if(tree==NULL)
	{
		return flag;
	}
	
	while(tree!=NULL)
	{
		if(tree->data==num)
		{
			flag=1;
			return flag;
		}
		else
		{
			if(num<tree->data)
			{
				tree=tree->left;
			}
			else
			{
				tree=tree->right;
			}
		}
	}
	return flag;
}

int main()
{
	int ch,num,flag;

	do{
		cout<<"1.CREATE"<<endl;
		cout<<"2.searchElement"<<endl;

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
			cout<<"Enter the element you want to be the search : ";
			cin>>num;
			flag=searchElement(tree,num,flag);
			if(flag==0)
			{
				cout<<"Element not found"<<endl;
			}
			else
			{
				cout<<"Element found"<<endl;
			}
			cout<<endl;
			break; 
		}

	}while(ch!=3);
}