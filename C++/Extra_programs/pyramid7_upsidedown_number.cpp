/*
12345
1234
123
12
1
*/
#include<iostream>
using namespace std;
class pyramid{
	public:
		int start,end,i,j;
		void pyra_mid()
		{
			for(i=end;i>=start;i--)
			{
				for(j=start;j<=i;j++)
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
