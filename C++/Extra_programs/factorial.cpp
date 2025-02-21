#include<iostream>
using namespace std;
class str_check
{
    public:
    void func()
    {
        string ch;
        int i=0,c=0;
        
        cout<<"Enter the string : "<<endl;
        cin>>ch;

        while (ch[i]!='\0')
        {
           if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
           {
                c++;
           }
           i++;
        }
        try
        {
           if(c==0)
           {
               throw "vowel not found in string";
           }
           else
           {
                cout<<"vowel found in string";
           }
        }
        catch(const char* e)
        {
            cout<<e;
        }
    }
};
