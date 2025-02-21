#include<iostream>
using namespace std;

class ArithOp
{
   public:
    int a,b,add,mul,sub;
    float mod,div;
    
    int func()
    {
      cout<<"\n-----------------------\n";

    cout<<"\nEntered value of a is="<<a<<endl;
    cout<<"\nEntered value of b is="<<b<<endl;

      cout<<"\n-----------------------\n";

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b; 
    mod=a%b;

    return 1;
    }
}; 

    

int main()
{
    ArithOp obj;   

    cout<<"\nEnter the value of a:";
    cin>>obj.a;

    cout<<"\nEnter the value of b:";
    cin>>obj.b;

    int result;
    result=obj.func();

    if(result==1)
    {
    cout << "\nAddition of a + b = " << obj.add <<endl;
    cout << "Subtraction of a - b = " << obj.sub <<endl;
    cout << "Multiplication of a * b = " << obj.mul <<endl;
    cout << "Division of a / b = " << obj.div <<endl;
    cout << "Modulus of a % b = " << obj.mod <<endl;
    }
    cout<<"\n\n";
 return 0;
}