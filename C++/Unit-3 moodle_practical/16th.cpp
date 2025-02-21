//  Write a C++ Program to enter two string and copy one string to another.

#include<iostream>
#include<string>
using namespace std;

class cpy_string{
    public:
    string s1;
    string s2;

    void copy_string()
    {
        cout<<"Enter the string1 : ";
        cin>>s1;

       s2=s1;

       cout<<"string is : "<<s1<<endl;
       cout<<"copy string is : "<<s2<<endl;
    }
};

int main()
{
    cpy_string obj;

    obj.copy_string();

    cout<<"\n\n";

    return 0;
}