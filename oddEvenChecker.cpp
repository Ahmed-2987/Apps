#include <iostream>  // Global Library
using namespace std; // Global Command

int main()
{
  cout << "======================\n";
  cout << "== Odd&Even Checker ==\n";
  cout << "======================\n";

  int num;
  cout << "Please, type a number: ";
  cin >> num;

  if (num % 2 == 0)
  {
    cout << "The Number " << num << " Is Even.\n";
  }
  else
  {
    cout << "The Number " << num << " Is Odd.\n";
  }

  return 0;
}