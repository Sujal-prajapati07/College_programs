#include<iostream>
using namespace std;
class sujal : public exception
{
    string message;

    public:
    sujal(string msg)
    {
        message=msg;
    }

    const char *what() const noexcept override
    {
        return message.c_str();
    }
};

int main()
{
    try
    {
        throw "this is custom exception";
    }
    catch(const char* e)
    {
        cout<<e;
    }
    return 0;
}