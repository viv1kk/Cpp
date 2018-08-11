// 06:33 PM 26-10-2017
// demonstration of sqrt() library function

#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{
double number, answer;
cout << "Enter Number : ";
cin >> number;
answer = sqrt(number);
cout << "The Square root of " << number << " is " << answer << endl;
return 0;
}
