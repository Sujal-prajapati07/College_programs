// Write a C++ Program to illustrate the Traversal of a string
#include<iostream>
using namespace std;
class string_print{
    public:
    string s1;
    void str_print()
    {
        cout<<"Enter the string:"<<endl;
        getline(cin,s1);

        cout<<"string is:"<<s1<<endl;
    }
};

int main()
{
    string_print obj;

    obj.str_print();

    return 0;
}