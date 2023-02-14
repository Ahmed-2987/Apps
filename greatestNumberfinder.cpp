#include <iostream>  // Global Library
using namespace std; // Global Command

int main()
{
  cout << "============================\n";
  cout << "== Greatest Number Finder ==\n";
  cout << "============================\n";

  int a, b, c;
  cout << "Please, type the first number: ";
  cin >> a;
  cout << "Please, type the second number: ";
  cin >> b;
  cout << "Please, type the third number: ";
  cin >> c;

  if (a > b && a > c)
  {
    cout << a << " Is The Greatest.\n";
  }
  else if (b > c)
  {
    cout << b << " Is The Greatest.\n";
  }
  else
  {
    cout << c << " Is The Greatest.\n";
  }

  return 0;
}