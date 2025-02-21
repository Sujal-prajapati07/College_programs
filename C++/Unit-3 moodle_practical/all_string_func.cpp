#include<iostream>
using namespace std;
class str_all
{
    public:
    void func()
    {
        int ch;
        string str1;
        string str2;

        cout<<"Enter the choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<"------------------------------------append----------------------------------------------"<<endl;

            cout<<"Enter the string1 : ";
            cin>>str1;

            cout<<"Enter the string2 : ";
            cin>>str2;

            str1.append(str2);

            cout<<str1;

            break;

            case 2:
            cout<<"------------------------------------swap----------------------------------------------"<<endl;

            cout<<"Enter the string1 : ";
            cin>>str1;

            cout<<"Enter the string2 : ";
            cin>>str2;

            str1.swap(str2);

            cout<<str1;

            break;

            case 3:
            cout<<"------------------------------------resize----------------------------------------------"<<endl;

            str1 = "gls university";
             
            str1.resize(8);

            cout<<str1;

            break;

            case 4:
            cout<<"------------------------------------length----------------------------------------------"<<endl;

            cout<<"Enter the string1 : ";
            cin>>str1;

            cout<<str1.length();

            break;

            case 5:
            cout<<"------------------------------------capacity---------------------------------------------"<<endl;

            cout<<"Enter the string1 : ";
            cin>>str1;

            cout<<str1.capacity();

            break;

            case 6:
            cout<<"------------------------------------copy---------------------------------------------"<<endl;

            string x="sujal prajapati";

            char y[20];

            int last=x.copy(y,14,6);

            y[last]='\0';

            cout<<y;

            break;
        }
    }
};

int main()
{
    str_all obj;

    obj.func();

    return 0;

}