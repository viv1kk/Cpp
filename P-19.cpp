// 02:21 AM 28-10-2017
/* Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19 */

#include <iostream>
using namespace std;

int main (void)
{
int num = 10;
cout << num << endl;
num *= 2;
cout << num << endl;
--num;
cout << num << endl;
return 0;
}