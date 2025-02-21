//  Write a C++ Program to enter two strings from user and Swap those string using function

#include<iostream>
#include<string>
using namespace std;

class swap_str{
    public:
    string s1,s2;
    void swap_value()
    {
        cout<<"Enter the string1:";
        getline(cin,s1);

        cout<<"Enter the string2:";
        getline(cin,s2);

        cout<<"After swaping : "<<endl;
        cout<<"value of string1 is : "<<s1<<endl;
        cout<<"value of string2 is : "<<s2<<endl;

        s1.swap(s2);

        cout<<"After swaping : "<<endl;
        cout<<"value of string1 is : "<<s1<<endl;
        cout<<"value of string2 is : "<<s2<<endl;
    }
};

int main()
{
    swap_str obj;

    obj.swap_value();

    cout<<"\n\n";

    return 0;

}