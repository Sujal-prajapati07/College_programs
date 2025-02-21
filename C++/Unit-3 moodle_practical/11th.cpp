//Write a C++ Program to enter 10 student details (Roll,Name) using array of Object.
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int RollNo;
};
int main()
{
    student obj[10];

    cout<<"Enter the details : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the Student name "<<i+1<<" : "<<endl;
        cin>>obj[i].name;

        cout<<"Enter the Student RollNo "<<i+1<<" : "<<endl;
        cin>>obj[i].RollNo;
    }

    cout<<"Print the details : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Student name "<<i+1<<" is : "<<obj[i].name<<endl;

        cout<<"Student RollNo "<<i+1<<" is : "<<obj[i].RollNo<<endl;
    }

    return 0;
}