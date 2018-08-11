// 02:32 PM 23-09-2017
// Program to demonstrate cin, newline

#include <iostream>
using namespace std;
int main (void)
{
int a;
cout <<"Enter Temperature in Fahrenheit : ";
cin >>a;
int b = (a - 32) * 5 / 9;
cout <<"Equivalent in Celsius is "<< b <<"\n";
return 0;
}