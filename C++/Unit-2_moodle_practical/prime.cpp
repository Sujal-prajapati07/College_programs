// write a c++ program to check prime number using Function

#include <iostream>

using namespace std;

int primeNumberChecker(int number)
{
  int count = 0;
  for (int i = 1; i <= number; i++)
  {
    if (number % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int number;
  cout << "enter number to find either it is a prime number or not : ";
  cin >> number;

  if (primeNumberChecker(number) == 1)
  {
    cout << "Number " << number << " is a prime number.";
  }
  else
  {
    cout << "Number " << number << " is not a prime number.";
  }
}