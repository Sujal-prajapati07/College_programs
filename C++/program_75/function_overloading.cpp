#include <iostream>
using namespace std;
class prime_arm_odd
{
public:
    prime_arm_odd()
    {
        int i, c = 0, n;
        int k = n;
        cout << "----------------For Prime No.--------------------" << endl;
        cout << "Enter the Number" << endl;
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << " yes its Prime no" << endl;
        }
        else
        {
            cout << "nah not a prime no." << endl;
            ;
        }
    }
    prime_arm_odd(int n)
    {
        int c, add = 0, r;

        c = n;

        while (n > 0)
        {
            r = n % 10;
            add = (r * r * r) + add;
            n = n / 10;
        }
        if (c == add)
        {
            cout << " yes,armstrong\n";
        }
        else
        {
            cout << "not an armstrong\n";
        }
    }
    prime_arm_odd(int sn, int en)
    {
        for (int i = sn; i <= en; i++)
        {
            if (i % 2 == 1)
            {
                cout << i << " =  is odd no" << endl;
            }
        }
    }
};
int main()
{

    prime_arm_odd obj1;

    int n;
    cout << "----------------For Armstrong--------------------" << endl;
    cout << "Enter the Number" << endl;
    cin >> n;

    prime_arm_odd obj2(n);

    cout << "----------------For Oddno. Printing--------------------" << endl;

    int sn, en;
    cout << "Enter the starting no: " << endl;
    cin >> sn;
    cout << "Enter the ending no: " << endl;
    cin >> en;

    prime_arm_odd obj3(sn, en);

    return 0;
}