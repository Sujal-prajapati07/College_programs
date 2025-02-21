// Write a Program with function to Check Whether a Number Is a Palindrome or Not.
#include <iostream>
using namespace std;
class palindrome
{
public:

    void pal_func(int n)
    {
        
    cout << "Enter the number:";
    cin >> n;
    
        int r, count, add;

        count = n;

        while (n > 0) 
        {
            r = n % 10; //151
            add = r + (add * 10); //150 1
            n = n / 10; //1
        }
        if (count==add)
        {
            cout << "Palindrome\n";
        }
        else
        {
            cout << "Not Palindrome\n";
        }
    }
}obj;
int main()
{
    int n;

    obj.pal_func(n);

    return 0;
}