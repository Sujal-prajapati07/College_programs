// Write a C++ Program for two string Name & Surname of a student and concate that two
// string.

#include<iostream>
#include<string>
using namespace std;

class concat{
    public:
    string s1,s2,s3;
    void concat_string()
    {
        cout<<"\nEnter the string1:"<<endl;
        getline(cin,s1);

        cout<<"\nEnter the string2:"<<endl;
        getline(cin,s2);

        s3 = s1 + " " + s2;

        cout<<"\nconcate string : "<<s3;
    }
};

int main()
{
  concat obj;

  obj.concat_string();

  cout<<"\n\n";

  return 0;
 
}