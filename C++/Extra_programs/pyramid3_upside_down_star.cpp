/*
*****
****
***
**
*
*/
#include<iostream>

using namespace std;

class pyramid{
	public:
		int i,j,start,end;
		void pyra_mid()
		{
			for(i=start;i<=end;i++)
			{
				for(j=end;j>=i;j--)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
		}
}pyrm;

int main()
{
	cout<<"Enter the start number:";
	cin>>pyrm.start;
	
	cout<<"Enter the start number:";
	cin>>pyrm.end;
	
	pyrm.pyra_mid();
	
	cout<<"\n\n";
	
	return 0;
	
}