#include <iostream>
using namespace std;

class first
{
    public:
    int num1, num2;
}obj;
int main() 
{

    cout << "\nEnter the value of num1: ";
    cin >> obj.num1;
    cout << "\nEnter the value of num2: ";
    cin >> obj.num2;
    
    cout<<"\n----------------------------------\n";

    cout<<"The value of num1= "<<obj.num1<<"\n";
    cout<<"\nThe value of num2= "<<obj.num2<<"\n";
    cout<<"\n----------------------------------\n";
    cout << "\nnum1 & num2 = " << (obj.num1 & obj.num2)<<"\n";
    cout << "num1 | num2 = " << (obj.num1 | obj.num2)<<"\n";
    cout << "num1 ^ num2 = " << (obj.num1 ^ obj.num2)<<"\n";
    cout << "~num1 = " << (~obj.num1) <<"\n~num2 = "<<(~obj.num2)<<"\n";
    cout << "num1 << 1 = " << (obj.num1 << 1)<<"\n";
    cout << "num2 >> 1 = " << (obj.num2 >> 1)<<"\n";

    return 0;
}