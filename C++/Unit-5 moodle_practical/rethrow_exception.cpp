#include<iostream>
using namespace std;

void innerfunction()
{
    try
    {
        throw "excption occured ";
    }
    catch(const char* e)
    {
        cout<<"exception in innerfunction "<<e<<endl;
        throw;
    }
}

void outerfunction()
{
    try
    {
        innerfunction();
    }
    catch(const char* e1)
    {
        cout<<"exception in outerfunction "<<e1<<endl;
    }
}

int main()
{
    try
    {
        outerfunction();
    }
    catch(const char* e2)
    {
        cout<<"the main exception "<<e2<<endl;
    }
    
}