// <---------------------------integer---------------------------->
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;

//     cout<<"Enter the age : "<<endl;
//     cin>>age;

//     try
//     {
//         if(age<18)
//         {
//             throw 1;
//         }
//         else
//         {
//             cout<<"eligible for voting"<<endl;
//         }
//     }
//     catch(int x)
//     {
//         cout<<"error:not eligible for voting..";
//     }
//     cout<<"\n";
//     return 0;
// }

// <-------------------------Boolean----------------------------------->
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;

//     cout<<"Enter the age : "<<endl;
//     cin>>age;

//     try
//     {
//         if(age<18)
//         {
//             throw true;
//         }
//         else
//         {
//             cout<<"eligible for voting"<<endl;
//         }
//     }
//     catch(bool x)
//     {
//         cout<<"error:not eligible for voting..";
//     }
//     cout<<"\n";
//     return 0;
// }

// <----------------------------string-------------------------->
#include<iostream>
using namespace std;
int main()
{
    int age;

    cout<<"Enter the age : "<<endl;
    cin>>age;

    try
    {
        if(age<18)
        {
            throw "error:age is not match for voating";
        }
        else
        {
            cout<<"eligible for voting"<<endl;
        }
    }
    catch(const char *x)
    {
        cout<<x<<" error:not eligible for voting..";
    }
    cout<<"\n";
    return 0;
}