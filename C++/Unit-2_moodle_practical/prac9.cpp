// Write a C++ program to swap numbers using friend function

#include<iostream>

using namespace std;

class func
{
    private:
    int a,b,c;
    public:
    func()
    {
        cout<<"Enter the a : "<<endl;
        cin>>a;

        cout<<"Enter the b : "<<endl;
        cin>>b;
    }
    friend void display(func &obj);
};

void display(func &obj)
{
    obj.c=obj.a;
    obj.a=obj.b;
    obj.b=obj.c;

    cout<<obj.a;
    cout<<obj.b;

}

int main()
{
    func obj;

    display(obj);
}

// class func{
//     private:
//     int a,b,c;
//     public:
//     func()
//     {
//         cout<<"Enter the a:";
//         cin>>a;

//         cout<<"Enter the b:";
//         cin>>b;
//     }
//     friend void display(func &obj);
// };
// void display(func &obj)
// {
//     obj.c=obj.a;
//     obj.a=obj.b;
//     obj.b=obj.c;

//     cout<<"\nAfter swaping value a:"<<obj.a;
//     cout<<"\nAfter swaping value b:"<<obj.b;
// }
// int main()
// {
//     func obj;

//     display(obj);
// }
