//  Design a class Student with private data members (name,Marks) and public member 
// functions (setName, setMarks, getName, getMarks) to demonstrate Public and Private 
// access specifiers

#include<iostream>

using namespace std;

class student{
    private:
    string name;
    int marks;

    public:
    void getName()
    {
        cout<<"\nEnter the name:";
        cin>>name; 
    }
    void getMarks()
    {
        cout<<"\nEnter the marks:";
        cin>>marks;
    }
    void setName()
    {
        cout<<"\n\nThe name is:"<<name;
    }
    void setMarks()
    {
        cout<<"\n\nMarks is : "<<marks;
    }
}obj;

int main()
{
    
    obj.getName();
    obj.getMarks();
    obj.setName();
    obj.setMarks();

    cout<<"\n\n";

    return 0;
}