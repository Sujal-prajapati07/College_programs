//Write a C++ Program to enter salary and output income tax and net salary.

#include<iostream>

using namespace std;

class tax_sal
{
    public:
    
    float salary,tax;

    void func()
    {
        float temp_salary = salary*tax/100;

        float net_salary = salary - temp_salary;

        cout<<"Net-salary = "<<net_salary;
    }
}obj;

int main()
{
    cout<<"Enter the salary:";
    cin>>obj.salary;

    cout<<"Enter the tax:";
    cin>>obj.tax;

    obj.func();

    cout<<"\n\n";

    return 0;
}