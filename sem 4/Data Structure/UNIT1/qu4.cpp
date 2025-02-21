//Write a CPP program to create a class named Student with data : No, Name and Addresss.Create 3 objects of Student structure. Get the value of structure variable from user and print it.
#include<iostream>
using namespace std;
class student
{
    public:
    int num;
    string address;
    string name;

    void getdata()
    {
        cout<<"Enter student no:"<<endl;
        cin>>num;
        cout<<"Enter the student name:"<<endl;
        cin>>name;
        cout<<"Enter the student address:"<<endl;
        cin>>address;
    }

    void printdata()
    {
        cout<<"Student number is : "<<num<<endl;
        cout<<"Student name is : "<<name<<endl;
        cout<<"Student Address is : "<<address<<endl;
    }
};

int main()
{
    student s1,s2,s3;

    cout<<"Student 1 : "<<endl;
    s1.getdata();
    cout<<"Student 2 : "<<endl;
    s2.getdata();
    cout<<"Student 3 : "<<endl;
    s3.getdata();

    cout<<"--------------------------------------------"<<endl;
    s1.printdata();
    cout<<endl;
    s2.printdata();
    cout<<endl;
    s3.printdata();

    return 0;
}