//Write a C++ program to find the area of a circle.

#include<iostream>

using namespace std;

class circle
{
    public:

    float pi=3.14;
    int r;

    void area_circle()
    {
        float sum = pi * r * r;

        cout<<"\nArea of circle is : "<<sum;
    }
}obj;

int main()
{
    cout<<"\nEnter the radious:";
    cin>>obj.r;

    obj.area_circle();

    cout<<"\n\n";

    return 0;
}