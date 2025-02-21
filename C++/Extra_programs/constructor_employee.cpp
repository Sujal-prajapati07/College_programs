// Create a class which will take details of employee like name, contact, email,
// salary salary of the employee is greater than 20000 than increase hra for 2%
// and medical of 5% if salary if > 50000 than increase hra for 5% and medical
// of 10%
#include <iostream>
using namespace std;
class Cons {
public:
  float salary, hra = 0, med = 0;
  long contact;
  string name, email;
  Cons() {
    cout << "\nEnter the name of the employee: ";
    cin >> name;
    cout << "\nEnter the contact: ";
    cin >> contact;
    cout << "\nEnter the salary: ";
    cin >> salary;
    cout << "\nEnter the email: ";
    cin >> email;

    if (salary > 20000 && salary < 50000) {
      hra = 0.02 * salary;
      med = 0.05 * salary;
    } else if (salary > 50000) {
      hra = 0.05 * salary;
      med = 0.1 * salary;
    }
    Cons(salary, hra, med);
  }
  Cons(float salary, float hra, float med) {
    cout << "Your net salary is " << salary + hra + med;
  }
};
int main() {
  Cons obj;
    
  cout << "\n";
  return 0;

}