#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "enter number  : ";
  cin >> number;
  try
  {

    if (number == 1)
    {
      throw runtime_error("this is a runtime error !!");
    }
    else if (number == 2)
    {
      throw out_of_range("this is a out of range error !!");
    }
    else if (number == 3)
    {
      throw invalid_argument("this is a invalid argument error !!");
    }
    else
    {
      cout << "pass";
    }
    }
  catch (const runtime_error &e)
  {
    cout << e.what() << '\n';
  }
  catch (const out_of_range &e)
  {
    cout << e.what() << '\n';
  }
  catch (const invalid_argument &e)
  {
    cout << e.what() << '\n';
  }
  return 0;
}