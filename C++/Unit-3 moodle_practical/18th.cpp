// Write a C++ Program to enter two strings from user and append first string to another string.
#include<iostream>
#include<string>
using namespace std;

class append_str{
    public:
    string s1,s2;
    void append_value()
    {
        cout<<"Enter the string1:";
        getline(cin,s1);

        cout<<"Enter the string2:";
        getline(cin,s2);

        s1.append(s2);

        cout<<"value of string1 is : "<<s1<<endl;
    }
};

int main()
{
    append_str obj;

    obj.append_value();

    cout<<"\n\n";

    return 0;

}