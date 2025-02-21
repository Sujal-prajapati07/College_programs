// Write a C++ to create a class Subject to print the detail of Subject Code, Subject Name using objects.
#include<iostream>
using namespace std;
class subject
{
    public:
    int subject_code;
    char subject_name[100];

    void getdata()
    {
        cout<<"Enter subject code:";
        cin>>subject_code;
        cout<<"Enter subject name:";
        cin>>subject_name;
    }
    void showdata()
    {
        cout<<"The subject code is:"<<subject_code<<"\n";
        cout<<"The subject name is:"<<subject_name<<"\n";
    }
};
int main()
{
    subject s;
    s.getdata();
    s.showdata();
    return 0;
}