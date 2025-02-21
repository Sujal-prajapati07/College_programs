// Write a C++ Program to convert days into years and weeks

#include<iostream>

using namespace std;

class dayyy
{
    public:
    int day,week,year;
    void func()
    {
        int year = day/365;
        int dayss = day%365;
        int week = dayss/7;
    
    cout<<"\ndays = "<<day;
    cout<<"\nyear = "<<year;
    cout<<"\nweek = "<<week;
    }
}obj;

int main()
{

    cout<<"\nEnter the days:";
    cin>>obj.day;

    obj.func();

    cout<<"\n\n";

    return 0;

}