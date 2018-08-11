// 10:51 PM 26-09-2017
// demonstrates setw manipulator

#include <iostream>
#include <iomanip>	// for setw
using namespace std;

int main (void)
{
long pop1 = 2425785, pop2 = 47, pop3 = 9761;
cout << setw(8) << "LOCATION" << setw(12) <<"POP." << endl << setw(8) << "Portcity" << setw(12) << pop1 << endl << setw(8) << "Hightown" << setw(12) << pop2 << endl << setw(8) << "Noville" << setw(12) << pop3 << endl;

return 0;
}