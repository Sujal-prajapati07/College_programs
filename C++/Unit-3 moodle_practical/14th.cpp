// Write a C++ Program by entering a string a string anf find out the capacity of the string

#include<iostream>
#include<string>
using namespace std;

class cap{
    public:
    string s1;

    void cap_string()
    {
        cout<<"Enter the string1 : ";
        getline(cin,s1);

        cout<<"length is : "<<s1.capacity();
    }
};

int main()
{
    cap obj;

    obj.cap_string();

    cout<<"\n\n";

    return 0;
}