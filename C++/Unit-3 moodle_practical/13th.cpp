//  Write a C++ Program to enter a string from user and find Length of that string

#include<iostream>
#include<string>
using namespace std;

class len{
    public:
    string s1;

    void len_string()
    {
        cout<<"Enter the string1 : ";
        getline(cin,s1);

        cout<<"length is : "<<s1.length();
    }
};

int main()
{
    len obj;

    obj.len_string();

    cout<<"\n\n";

    return 0;
}