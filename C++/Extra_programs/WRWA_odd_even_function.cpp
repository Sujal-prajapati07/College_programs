//WRWA
#include<iostream>

using namespace std;

class odd_even{
    public:
    int number;
    int odevn(int num){
        if(number%2==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
}oe;

int main()
{
    int result,num;

    cout<<"Enter the number:";
    cin>>oe.number;

    result=oe.odevn(num);

    if(result==1)
    { 
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }

    cout<<"\n\n";

    return 0;
}