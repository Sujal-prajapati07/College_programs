//   Write a C++ program to create a method that takes an integer as a parameter and throws an
//   exception in another function if the number is odd.
#include <iostream>
using namespace std;
class qus10
{
public:
    void fun2()
    {
        try
        {

            throw "error : its an odd number..... ";
        }
        catch (const char *e)
        {
            cout << e;
        }
    }
        void fun1(int a)
        {

            if (a % 2 != 0)
            {
                fun2();
            }
            else
            {
                cout << "even :";
            }
        }
    };
    int main()
    {
        int n1;
        cout << "enter number 1:" << endl;
        cin >> n1;
        qus10 obj1;
        obj1.fun1(n1);
        return 0;
    }
