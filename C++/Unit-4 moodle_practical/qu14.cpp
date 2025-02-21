//Write a program that has a template class STUDENT to read and print the details of student. Use multiple arguments
#include<iostream>
using namespace std;
template<class T,class Y,class Z>
class student
{
    public:
    void func(T roll,Y name,Z marks)
    {
        cout<<"Roll no is : "<<roll<<endl;
        cout<<"Student name is : "<<name<<endl;
        cout<<"marks is : "<<marks<<endl;
    }
};

int main()
{
    // student<int,string,float>obj;

    int a;
    string b;
    float c;

    cout<<"Enter the rollno : "<<endl;
    cin>>a;

    cout<<"Enter the name : "<<endl;
    cin>>b;

    cout<<"Enter the marks : "<<endl;
    cin>>c;
    student<int,string,float>obj;
    obj.func(a,b,c);
}
