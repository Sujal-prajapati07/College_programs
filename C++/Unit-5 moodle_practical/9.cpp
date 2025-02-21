/*
 Write a C++ program to input a age from user, If age is greater than 18 then eligible for 
licence otherwise raise an exception and provide a appropriate message.
*/
#include <iostream>
using namespace std;
class qus9
{
    public:
    void age()
    {
        int age;
        cout << "enter age :" << endl;
        cin >> age;
       
        try
        {
            if (age<18 && age>0)
            {
                throw"error : you are not aligible for licence....!";
            }
            else{
                cout<<" aligible for licence"; 
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
    qus9 obj1;
    obj1.age();
    return 0;
}