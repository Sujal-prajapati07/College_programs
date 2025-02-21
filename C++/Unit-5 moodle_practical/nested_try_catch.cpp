#include <iostream>

using namespace std;

int main()
{
            try
            {
                try
                {
                    throw "inner exception:";
                }
                catch(const char* e)
                {
                    cout<<e;
                    throw "outer exception:";
                }
            }
            catch(const char *e)
            {
                cout<<e;
            }
              
    return 0;
}