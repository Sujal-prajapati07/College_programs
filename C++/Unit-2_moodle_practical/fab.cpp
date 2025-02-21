// Write aa c++ program to print Fibonacci series up to a user inputted numbers using
// recursive function.
#include <iostream>

using namespace std;

int fibonacciSeries(int currentNumber, int preNumber, int n)
{
  if (n > 0)
  {
    int temp = currentNumber;
    currentNumber += preNumber;
    preNumber = temp;
    n--;
    return fibonacciSeries(currentNumber, preNumber, n);
  }
  return currentNumber;
}

int fibonacciSeries(int n)
{
  if (n == 1)
  {
    return 0;
  }
  else if (n == 2 || n == 3)
  {
    return 1;
  }
  else
  {

    int temp = n;
    int num1 = 0;
    int num2 = 1;
    int currentNumber = 0;
    while (n > 0)
    {

      currentNumber = num1 + num2;
      num1 = num2;
      num2 = currentNumber;
      n--;
    }
    return currentNumber;
  }
}

int main()
{
  cout << fibonacciSeries(7);
//   cout << fibonacciSeries(1, 0, 6);
}