/*
1
12
123
1234
12345
123456
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
	cout<<"Enter the start number:";
	cin>>pyrm.start;
	
	cout<<"Enter the start number:";
	cin>>pyrm.end;
	
	pyrm.pyra_mid();
	
	cout<<"\n\n";
	
	return 0;
	
}
