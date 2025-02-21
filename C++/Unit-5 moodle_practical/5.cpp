/*
Write a C++ program to perform arithmetic operations on two numbers and throw an 
exception if the dividend is zero or does not contain an operator
*/
#include<iostream>
using namespace std;
class qus5
{
    public:
    void arith()
    {
         int a, b, res;
    int ch;
    cout << "\nEnter 1 For Addition        :";
    cout << "\nEnter 2 For Subtraction     :";
    cout << "\nEnter 3 For Multiplication  :";
    cout << "\nEnter 4 For Division        :";
    cout << "\nEnter 5 For Modulus         :"<<endl;
    cin >> ch;
    try{
        if(!(ch==1||ch==2||ch==3||ch==4||ch==5))
        {
            throw "error: does not contain any operator...! ";
        }
    }
    catch(const char* e)
    {
        cout<<e;
    }
    switch (ch) {
        case 1:
        {
            cout << "Enter Two Numbers :";
            cin >> a>> b;
            res = a+ b;
            cout << "\nResult is :" << res;
            break;
        }
        case 2:
        {
            cout << "Enter Two Numbers :";
            cin >> a >> b;
            res = a - b;
            cout <<res;
            break;
        }
        case 3:
        {
            cout << "Enter Two Numbers :";
            cin >> a>> b;
            res = a * b;
            cout << "Result is :" << res;
            break;
        }
        case 4:
        {
            cout << "Enter Two Numbers :";
            cin >> a >> b;
            try{
                if(a==0)
                {
                    throw"error: it can not be 0..!";
                }
                else
                {
                      res = a / b;
                     cout << "Result is :" << res;
                      
                }
            }
            catch(const char* e)
            {
                  cout<<e;
            }
          break;
        }
        case 5:
        {
            cout << "Enter Two Numbers :";
            cin >> a >> b;
            res = a % b;
            cout << "Result is :" << res;
            break;
        }
    }
    }
};
int main() {

qus5 obj1;
obj1.arith();
   
  return 0;
}