// 01:51 AM 28-10-2017
/* Write a program that generates the following table:
1990 135
1991 7290
1992 11300
1993 16200
Use a single cout statement for all output */

#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
cout << setw(4) << "1990" << setw(6) << "135" << endl;
cout << setw(4) << "1991" << setw(6) << "7290" << endl;
cout << setw(4) << "1992" << setw(6) << "11300" << endl;
cout << setw(4) << "1993" << setw(6) << "16200" << endl;
return 0;
}