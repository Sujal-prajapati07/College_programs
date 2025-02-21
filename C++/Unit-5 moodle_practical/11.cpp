/*
Write a C++ program to create a method that takes a string as input and throws an exception
if the string does not contain vowels.
*/ \
#include<iostream>
using namespace std;
class qus11
{
public:
    void fun1()
    {
        string ce;
        int i = 0, c = 0;
        cout << "enter string  :" << endl;
        cin >> ce;
        while (ce[i] != '\0')
        {
            if (ce[i] == 'a' || ce[i] =='e' ||ce[i] =='i'||ce[i] =='o'||ce[i] =='u'||ce[i] =='A'||ce[i] =='E'||ce[i] =='I'||ce[i] =='O'||ce[i] =='U')
            {
                c++;
            }
            i++;
        }
        try
        {
            if (c == 0)
            {
                throw "error :no vovels";
            }
            else
            {
                cout << "vovwls found";
            }
        }
        catch (const char *e)
        {
            cout << e << endl;
        }
    }
};
int main()
{
    qus11 obj1;
    obj1.fun1();
    return 0;
}