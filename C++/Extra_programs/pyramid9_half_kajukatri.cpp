/*
 	*

   * *

  * * *

 * * * *

* * * * *
*/
#include<iostream>
using namespace std;
class pyramid{
	public:
		int i,j,row,space;
		void pyra_mid()
		{
			for(i=1;i<=row;i++)
			{
				for(space=1;space<=row-i;space++)
				{
					cout<<" ";
				}
				for(j=1;j<=i;j++)
				{
					cout<<"* ";
				}
				cout<<"\n";
			}
		}
}pyrm;

int main()
{
	cout<<"\nEnter the row:";
	cin>>pyrm.row;
	
	pyrm.pyra_mid();
	
	cout<<"\n\n";
	
	return 0;
	
}
