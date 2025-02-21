/*Write a C++ Program to create a class employee to print the detail of employees using objects.*/
#include<iostream>
using namespace std;
class emp
{
    public:
    int age;
    char name[100];
    int id;
}e;
int main()
{
    
    cout<<"Enter the age of employee:";
    cin>>e.age;

    cout<<"Enter the name of employee:";
    cin>>e.name;

    cout<<"Enter the id of employee:";
    cin>>e.id;
 
    cout<<"The age of employee is:"<<e.age<<endl;
    cout<<"The name of employee is:"<<e.name<<endl;
    cout<<"The id of employee is:"<<e.id<<endl;

    return 0;
}