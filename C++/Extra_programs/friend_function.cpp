#include<iostream>

using namespace std;

class func1
{
    private:
    int a,b;
    public:
    func1()
    {
        cout<<"Enter the a:";
        cin>>a;

        cout<<"Enter the b:";
        cin>>b;
    }
    friend void display(func1 &obj);
};
void display(func1 &obj)
{
    if(obj.a>obj.b)
    {
        cout<<"A is Bigger";
    }
    else{
        cout<<"B is bigger";
    }
}

int main()
{
    func1 obj;

    display(obj);
    
    return 0;
}