// Write a C++ Program to generate a simple calculator using constructor.
#include <iostream>
using namespace std;
class abc
{
public:
    int a,b;
public:
    abc() // constructor abc().
    {
        cout << "Enetr a:";
        cin >> a;
        cout << "Enetr b:";
        cin >> b;
    }
    void calc()
    {
        int r;
        char ch; 
        cout << "Enter character: +  -  *  /---:";
        cin >> ch;

        switch (ch)
        {
        case '+':
            r = a + b;
            cout << "The addition of two number is:" << r;
            break;
        case '-':
            r = a - b;
            cout << "The subtraction of two number is:" << r;
            break;
        case '*':
            r = a * b;
            cout << "The miultiplication of two number is:" << r;
            break;
        case '/':
            r = a / b;
            cout << "The division of two number is:" << r;
            break;
        }
    }
}c;
int main()
{   
    c.calc();
    
    cout<<"\n\n";
    
    return 0;

}