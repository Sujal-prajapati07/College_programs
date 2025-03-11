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
	node *ptr,*nodeptr,*Parentptr;
	ptr=new node();
	ptr->data=num;

	if(tree==NULL)
	{
		tree=ptr;//new node create thase in tree
		tree->left=NULL;
		tree->right=NULL;
	}
	else
	{
		Parentptr=NULL;
		nodeptr=tree;

		while(nodeptr!=NULL)
		{
			Parentptr=nodeptr;

			if(num<nodeptr->data)
			{
				nodeptr=nodeptr->left;
			}
			else
			{
				nodeptr=nodeptr->right;
			}
		}
		if(num<Parentptr->data)
		{
			Parentptr->left=ptr;
		}
		else
		{
			Parentptr->right=ptr;
		}
	}
	return tree;
}

void preorder(node *tree)
{
	if(tree!=NULL)
	{
		cout<<tree->data<<endl;
		preorder(tree->left);
		preorder(tree->right);
	}
}

void postorder(node *tree)
{
	if(tree!=NULL)
	{
		preorder(tree->left);
		preorder(tree->right);
		cout<<tree->data<<endl;
	}
}

void inorder(node *tree)
{
	if(tree!=NULL)
	{
		preorder(tree->left);
		cout<<tree->data<<endl;
		preorder(tree->right);
	}
}

int search_element(node *tree,int num,int flag)
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
	int num,ch,flag;

	do{
		cout<<"1.INSERT"<<endl;
		cout<<"2.PREORDER"<<endl;
		cout<<"3.POSTORDER"<<endl;
		cout<<"4.INOREDER"<<endl;
		cout<<"5.SEARCH THE ELEMENT"<<endl;

		cout<<"Enter the choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1:
			cout<<"Enter the number:";
			cin>>num;
			tree=insert(tree,num);
			break;

			case 2:
			preorder(tree);
			cout<<endl;
			break;

			case 3:
			postorder(tree);
			cout<<endl;
			break;

			case 4:
			inorder(tree);
			cout<<endl;
			break;

			case 5:
			cout<<"Enter the element you want the search : "<<endl;
			cin>>num;
			flag=search_element(tree,num,flag);
			if(flag==0)
			{
				cout<<"element is not present in the tree"<<endl;
			}
			else
			{
				cout<<"element is present in the tree"<<endl;
			}
			break;
		}
	}while(ch!=6);
}