//Write a C++ Program to create a menu driven program for to perform the following      operations 
// 1. Sum of Digit
// 2. Armstrong or Not
// 3. Palindrome or Not
// 4. Multiplication of Digit
#include<iostream>

using namespace std;

class opt{
    public:
    int ch,a,reminder,reverse=0,temp;
    int reversed=1;
    void func()
    {
        cout<<"\nEnter one for sum of digit";
        cout<<"\nEnter two for check Armstrong or not";
        cout<<"\nEnter three for check palindrom or not";
        cout<<"\nEnter four for multipliction of digit";

        switch(ch)
        {
            case 1:
                cout<<"\n\nEnter the a:";
                cin>>a;

                while(a>0)
                {
                    reminder=a%10; //1 
                    reverse=reverse+reminder;//2+1=3 
                    a=a/10;
                }
                cout<<"\n\nsum of digit is:"<<reverse;
                break;

            case 2:
                cout<<"\n\nEnter the a:";
                cin>>a;

                temp=a;

                while(a>0)
                {
                    reminder=a%10;
                    reverse=reverse+(reminder*reminder*reminder);
                    a=a/10;
                }
                if(reverse==temp)
                {
                    cout<<"\n\nyes number is armstrong";
                }
                else
                {
                    cout<<"\n\nno number is not armstrong";
                }
                break;

            case 3:
                cout<<"\n\nEnter the a:";
                cin>>a;

                temp=a;

                while(a>0)
                {
                    reminder=a%10;
                    reverse=reverse*10+reminder;
                    a=a/10;
                }
                if(reverse==temp)
                {
                    cout<<"\n\nyes number is palindrom";
                }
                else
                {
                    cout<<"\n\nno number is not palindrom";
                }
                break;

            case 4:
                cout<<"\n\nEnter the a:";
                cin>>a;
                
                while(a>0)
                {
                    reminder=a%10; //2
                    reversed=reversed*reminder;//2+1=3
                    a=a/10;
                }
                cout<<"\n\nmultiplication of digit is:"<<reversed;
                break;

                default:
                cout<<"\n\nINVALID CHOICE";
                break;
        }
    }
}obj;

int main()
{
    cout<<"Enter the choice:";
    cin>>obj.ch;

    obj.func();

    cout<<"\n\n";

    return 0;
}