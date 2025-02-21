/*
Write a C++ program to accept an email address and throw an exception if it does not 
contain @ symbol.
*/
#include <iostream>
using namespace std;
class qus6
{
    public:
    void email()
    {
        string email;
        int i = 0, c = 0;
        cout << "enter email id  :" << endl;
        cin >> email;
        while (email[i] != '\0')
        {
            if (email[i] == '@')
            {
                c++;
            }
            i++;
        }
        try
        {
            if (c == 0)
            {
                throw"error : couldn't find [@] in email ....!";
            }
            else{
                cout<<"good email id"; 
            }
        }
        catch(const char* e)
        {
            cout<<e<<endl;
        }
    }
};
int main()
{
    qus6 obj1;
    obj1.email();
    return 0;
}