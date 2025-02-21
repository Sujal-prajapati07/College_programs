// Write a C++ program to resize the string by 10
#include<iostream>
#include<string>
using namespace std;

class func{
    public:
    void res_ize()
    {
        string s1="GLS UNIVERSITY";

        s1.resize(8);

        cout<<"resize string is : "<<s1;
    }
};

int main()
{
    func obj;

    obj.res_ize();

    cout<<"\n\n";

    return 0;
}