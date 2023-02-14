#include <iostream>  // Global Library
using namespace std; // Global Command

int main()
{
  cout << "====================\n";
  cout << "== Age Calculator ==\n";
  cout << "====================\n";

  int age;
  cout << "Please, type your age: ";
  cin >> age;

  int age_in_months = age * 12;
  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 24;
  int age_in_minutes = age_in_hours * 60;
  int age_in_seconds = age_in_minutes * 60;

  cout << "Your Age In Years Is: " << age << " Years.\n";
  cout << "Your Age In Months Is: " << age_in_months << " Months.\n";
  cout << "Your Age In Days Is: " << age_in_days << " Days.\n";
  cout << "Your Age In Hours Is: " << age_in_hours << " Hours.\n";
  cout << "Your Age In Minutes Is: " << age_in_minutes << " Minutes.\n";
  cout << "Your Age In Seconds Is: " << age_in_seconds << " Seconds.\n";

  return 0;
}