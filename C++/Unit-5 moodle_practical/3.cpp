// Write a program to take array values from user and illustrate array index out of bound
// exception.

#include <iostream>
using namespace std;
class qus3
{
public:
    void arr_ex()
    {
        int n;
        cout << "enter the size of array:" << endl;
        cin >> n;
        int arr[n];

        cout << "enter the elements of array:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c;
        cout << "enter the index you want to check (starting from 0) :" << endl;
        cin >> c;
        try
        {
            if (c >= n)
            {
                throw "error : array out of bound...!";
            }
            else
            {
                cout << arr[c];
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
    qus3 obj1;
    obj1.arr_ex();
    return 0;
}