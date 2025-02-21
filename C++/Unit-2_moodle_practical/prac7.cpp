// Create a class employee with name, salary, age as member, use get_data() and show() 
// functions. Display details of 3 manager employees.

#include<iostream>

using namespace std;

class employee
{
    private:
    string name[50];
    int salary[10];
    int age[10];

    public:
    int i;
    void get_data()
    {
        for(i=1;i<=3;i++)
        {
            cout<<"Enter the name:"<<i+1<<":";
            cin>>name[i];

            cout<<"Enter the salary:"<<i+1<<":";
            cin>>salary[i];

            cout<<"Enter the age:"<<i+1<<":";
            cin>>age[i];
        }
    }
    void show_data()
    {
        for(i=1;i<=3;i++)
        {
            cout<<"\n\nThe employee name "<<i<<"is"<<name[i];
            cout<<"\n\nThe salary of employee "<<i<<"is"<<salary[i];
            cout<<"\n\nThe age of employee "<<i<<"is"<<age[i];
        }
    }
};

int main()
{
    employee obj;

    obj.get_data();
    obj.show_data();

    cout<<"\n\n";

    return 0;
}