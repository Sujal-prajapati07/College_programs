/*
11111
22222
33333
44444
55555
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
					cout<<i;
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
