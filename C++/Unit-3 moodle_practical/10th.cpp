// Write a C++ program to enter employee details like name & Salary using Array of Object.
#include<iostream>
using namespace std;
class emp{
    public:
    string name;
    int salary;
};
int main()
{
    emp obj[2];

    for(int i=0;i<2;i++)
    {
        cout<<"Enter the employee name "<<i+1<<" : "<<endl;
        cin>>obj[i].name;

        cout<<"Enter the employee salary "<<i+1<<" : "<<endl;
        cin>>obj[i].salary;
    }

    for(int i=0;i<2;i++)
    {
        cout<<"Employee name "<<i+1<<" is : "<<obj[i].name<<endl;

        cout<<"Employee salary "<<i+1<<" is : "<<obj[i].salary<<endl;
    }

    return 0;
}