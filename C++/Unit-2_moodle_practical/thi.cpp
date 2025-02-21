#include <iostream>

using namespace std;

class Demo {

int a;
public:
    void setValueOfA(int a)
    {
        this->a=a;
    }

    int getValueOfA()
    {
        return this->a;
    }
};

int main()
{
    Demo d;
    cout<<d.getValueOfA()<<endl;
    d.setValueOfA(12);
    cout<<d.getValueOfA();
}