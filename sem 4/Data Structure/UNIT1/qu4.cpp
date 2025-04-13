#include<iostream>

using namespace std;

class Student
{
    public:
    int no;
    string name;
    string address;

    void get()
    {
        cout<<"Enter the student RollNo : "<<endl;
        cin>>no;

        cout<<"Enter the student name : "<<endl;
        cin>>name;

        cout<<"Enter the student address : "<<endl;
        cin>>address;
    }

    void set()
    {
        cout<<"Student RollNo is : "<<no<<"\t";
        cout<<"Student Name is : "<<name<<"\t";
        cout<<"Sudent Address is : "<<address<<"\t";
    }
};

int main()
{
    Student s1,s2,s3; //object create

    cout<<"Student 1 : "<<endl;
    s1.get();

    cout<<"Student 2 : "<<endl;
    s2.get();

    cout<<"Student 3 : "<<endl;
    s3.get();

    cout<<"-------Print all the data-------"<<endl;

    s1.set();
    cout<<endl;
    s2.set();
    cout<<endl;
    s3.set();
}
