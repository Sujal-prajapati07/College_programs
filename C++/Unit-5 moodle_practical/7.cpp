#include<iostream>
using namespace std;
int main()
{
	int accno,balance,withdraw;
	cout<<"Enter the Account Number\n";
	cin>>accno;

	cout<<"Enter the Balance in the Account\n";
	cin>>balance;


	while(true)
	{
		cout<<"Enter the Withdraw amount you want\n";
		cin>>withdraw;

		try
		{
			if(withdraw>balance)
			{
				throw "\nWithdraw Amount is More than Balance. Try Again \n";
			}
			else
			{
				cout<<"Withdraw is Successfully\n";
				break;
			}
		}
		catch(const char* x)
		{
			cout<<""<<x<<endl;
		}
	}
	return 0;
}