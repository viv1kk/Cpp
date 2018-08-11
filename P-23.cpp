// 11:40 AM 28-10-2017
/* You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number
representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit. */

#include <iostream>
using namespace std;

int main (void)
{
float celsius = 0, Fahrenheit = 0;
cout << "Enter Temperature (in Celcius) : ";
cin >> celsius;
cout << "Conversion in Fahrenheit is " << ((9 * celsius) /5) + 32;
return 0;
}