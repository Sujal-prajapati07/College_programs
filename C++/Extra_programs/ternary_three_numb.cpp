#include<iostream>

using namespace std;

class opt{
    public:
    int a,b,c;
}obj;

int main()
{
    int ans;

    cout<<"Enter the a:";
    cin>>obj.a;

    cout<<"Enter the b:";
    cin>>obj.b;

    cout<<"Enter the c:";
    cin>>obj.c;

    ans=(obj.a>obj.b) ? ((obj.a>obj.c) ? obj.a:obj.c) : ((obj.b>obj.c) ? obj.b:obj.c);

    cout<<ans<<" is bigger";

    cout<<"\n\n";
    
    return 0;
}
