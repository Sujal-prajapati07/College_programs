/*
12345
12345
12345
12345
12345
*/
#include<iostream>
using namespace std;
class pyramid{
	public:
		int start,end,i,j;
		void pyra_mid()
		{
			for(i=start;i<=end;i++)
			{
				for(j=start;j<=end;j++)
				{
					cout<<j;
				}
				cout<<"\n";
			}
		}
}pyrm;

int main()
{
	cout<<"\nEnter the start number:";
	cin>>pyrm.start;
	
	cout<<"\nEnter the end number:";
	cin>>pyrm.end;
	
	pyrm.pyra_mid();
	
	cout<<"\n\n";
	
	return 0;
	
}
