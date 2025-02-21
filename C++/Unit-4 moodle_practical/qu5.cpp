//Write a program to pass an object to template function and display its members
#include<iostream>
using namespace std;

class Tempo{
    private:
    int x;
    char y;

    public:
    template <class obj1,class obj2>    //Declare template func
    friend void Display(obj1 a, obj2 b, Tempo &ob);
};
template <class obj1, class obj2>  //Create template func
void Display(obj1 a, obj2 b, Tempo &ob)
{
    ob.x = a;
    ob.y = b;
    cout<<"int = "<<ob.x<<endl;
    cout<<"char = "<<ob.y<<endl;
}
int main()
{
    int a;
    char b;
    cout<<"Enter int and char: ";
    cin>>a>>b;

    Tempo o; //Create object
    Display(a,b,o); // pass Int, Char and object

    return 0;
}