//  Write a program to take a two values from user and illustrate Division by Zero Exception.
#include <iostream>
using namespace std;
class qus2
{
public:
    void div()
    {
        int n1, n2;
        cout << "enter number 1:" << endl;
        cin >> n1;
        cout << "enter number 2:" << endl;
        cin >> n2;
        try
        {
            if (n2 == 0)
            {
                throw "error: denometer can not be 0...!";
            }
            else
            {
                int res = n1 / n2;
                cout << "division of " << n1 << " and " << n2 << " = " << res;
            }
        }
        catch (const char *e)
        {
            cout << e;
        }
    }
};
int main()
{
    qus2 obj1;
    obj1.div();
    return 0;
}
