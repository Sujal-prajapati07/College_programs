/*
Write a program to input n integer numbers and display highest and second highest number.
Also handle the different exceptions possible to be thrown during execution.
*/

#include <iostream>
using namespace std;
class qus1
{
  public :
  void fun1()
{
    int n, c = 1;

    cout << "enter n :";
    cin >> n;

    try
    {
        if (n > 6)
        {
            throw "error : n cant be bigger than 6.....! ";
        }
        else
        {
            int arr[n];

            cout << "enter numbers :";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            while (c < n)
            {
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] > arr[i + 1])
                    {
                        int temp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = temp;
                    }
                }
                c++;
            }
            cout << "highest " << arr[n - 1] << endl;
            cout << "2nd highest " << arr[n - 2] << endl;
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
    qus1 obj1;
    obj1.fun1();

    return 0;
}