#include <iostream>  // Global Library
using namespace std; // Global Command

int main()
{
  cout << "=======================\n";
  cout << "== Simple Calculator ==\n";
  cout << "=======================\n";

  int n1, n2, opNumber;
  cout << "Please, type the first number: ";
  cin >> n1;
  cout << "Please, type the second number: ";
  cin >> n2;
  cout << "Please, choose an operation's type number.\n";
  cout << "1 = +\n";
  cout << "2 = -\n";
  cout << "3 = /\n";
  cout << "4 = *\n";
  cout << "The Operation's type number is: ";
  cin >> opNumber;

  switch (opNumber)
  {
    case 1:
      cout << n1 << " + " << n2 << " = " << n1 + n2 << ".\n";
      break;
    case 2:
      cout << n1 << " - " << n2 << " = " << n1 - n2 << ".\n";
      break;
    case 3:
      cout << n1 << " / " << n2 << " = " << n1 / n2 << ".\n";
      break;
    case 4:
      cout << n1 << " * " << n2 << " = " << n1 * n2 << ".\n";
      break;
    default:
      cout << "The Operation's Type Number Isn't Valid.\n";
  }

  return 0;
}