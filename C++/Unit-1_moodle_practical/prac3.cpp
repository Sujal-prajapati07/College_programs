// Write a C++ program using Switch statement example to generate days of the week.

#include<iostream>

using namespace std;

class switch_day
{
    public:
    int ch;
    void switch_sta()
    {
        switch (ch)
        {
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"INVALID";
        break;
        }
    }
}obj;

int main()
{
    cout<<"\nEnter the choice:";
    cin>>obj.ch;

    obj.switch_sta();

    cout<<"\n\n";

    return 0;
}