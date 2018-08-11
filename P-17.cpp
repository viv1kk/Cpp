// 01:37 AM 28-10-2017
/* Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet. */

#include <iostream>
using namespace std;

int main (void)
{
double gallon = 0;
cout << "Enter amount (in Gallons) : ";
cin >> gallon;
cout << "The volume of " << gallon << " in cubic feet is " << gallon / 7.481 << endl;
return 0;
}