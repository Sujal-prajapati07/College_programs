/*
 1

 2 3

 4 5 6

 7 8 9 10

 11 12 13 14 15
*/
#include<iostream>
using namespace std;
class pyramid{
	public:
		int start,end,i,j,number=1;
		void pyra_mid()
		{
			for(i=start;i<=end;i++)
			{
				for(j=start;j<=i;j++)
				{
					cout<<" "<<number;
					number++;
				}
				cout<<"\n\n";
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
