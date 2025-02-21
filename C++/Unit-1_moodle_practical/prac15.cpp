//Write a C++ Program to print multiplication table.

#include<iostream>

using namespace std;

class multi
{
    public:
    int a,i;
    void multi_table()
    {
        for(i=1;i<=10;i++)
        {
            cout<<"\n"<<a<<" X "<<i<<" = "<<(a*i);
        }
    }
}obj;

int main()
{
    cout<<"\nEnter the number:";
    cin>>obj.a;

    obj.multi_table();

    cout<<"\n\n";

    return 0;
}