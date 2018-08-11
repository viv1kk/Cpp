// 11:22 AM 28-10-2017
/* On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units. */

#include <iostream>
using namespace std;

int main (void)
{
float dollor = 0, Pound = 0, Yen = 0, deutschemark = 0, frank = 0;
cout << "Enter Amount (in $) = ";
cin >> dollor;
cout << "      Amount in British Pound : " << dollor * 1.487 << endl;
cout << "       Amount in French Franc : " << dollor * 0.172 << endl;
cout << "Amount in German Deutschemark : " << dollor * 0.584 << endl;
cout << "       Amount in Japanese Yen : " << dollor * 0.00955 << endl;
return 0;
}