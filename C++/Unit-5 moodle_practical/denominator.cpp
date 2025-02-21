#include<iostream>
using namespace std;
int main()
{
    double numerator,denominator,divide;

    cout<<"Enter the numerator : "<<endl;
    cin>>numerator;

    cout<<"Enter the Denominator : "<<endl;
    cin>>denominator;

    try
    {
        if(denominator==0)
        {
            throw "error:";
        }
        else
        {
            divide=numerator/denominator;
            cout<<divide;
        }
    }
    catch(const char *x)
    {
        cout<<x<<" can not divide by 0";
    }
    
}