#include<iostream>

using namespace std;

int main()
{
    int X,Y;
    int S,ls,rs;
    cout<<"\n Enter the value of X:";
    cin>>X;

    cout<<"\n Enter the value of Y:";
    cin>>Y;

    cout<<"\n Enter the value to shift:";
    cin>>S;

    cout<<"\n--------------------------";

    cout<<"\nEnter value of X is = "<<X;
    cout<<"\nEnter value of Y is = "<<Y;
    cout<<"\nEnter value of shift is = "<<S;

      cout<<"\n--------------------------";

  ls=X<<S;
  rs=Y>>S;

    cout<<"\n"<<X<<"&"<<Y<<"="<<(X&Y);  // 0010 & 0011=0010 = 2

    cout<<"\n"<<X<<"|"<<Y<<"="<<(X|Y);  // 0010 | 0011=0011 = 3

    cout<<"\n"<<X<<"^"<<Y<<"="<<(X^Y);  // 0010 ^ 0011=0001= 1 

    cout<<"\n"<<X<<"<<"<<S<<"="<<ls;   // ls double kar ta hai 

    cout<<"\n"<<Y<<">>"<<S<<"="<<rs;   // rs half kar ta hai 
    

    cout<<"\n\n";
    

    return 0;
}